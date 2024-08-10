#include <iostream>
#include <pthread.h>

using namespace std;

static volatile int balance = 0;
//Declaring mutex which is default private for process
pthread_mutex_t myMutex;

//Start routine for thread
void *addition(void *param)
{
    char *who = (char *)param;
    cout<<"Depositor is "<<who<<endl;

    for(int i=0 ; i<100000; i++){
     //critical section
     //Apply lock so only one thread can access at a time.
     pthread_mutex_lock(&myMutex);
     balance += 1;
    //unlock the mutex so other thread can acess the resource.
    pthread_mutex_unlock(&myMutex);
    }
    pthread_exit(NULL);
}

int main(){

    cout<<"starting balance is: " << balance<<endl;

    //create thread identifiers
    pthread_t p1,p2;

    //initialize the mutex with null atttributes as no attr is currently defined for myMutex.
    pthread_mutex_init(&mutex, NULL);

    //start function attributes
    char a[] = "A";
    char b[] = "B";

    //create thread p1
    pthread_create(&p1, NULL, &addition,(void *)a);

    //create thread p1
    pthread_create(&p2, NULL, &addition,(void *)b);

   //Main thread waits till p1 Joins until p1 complete execution
    pthread_join(p1,NULL);

   //Main thread waits till p2 Joins until p2 complete execution
    pthread_join(p2,NULL);

    cout<<"balance after deposit is: " << balance<<endl;
    pthread_exit(NULL); //Even if main thread exits other would keep executing if main exits by pthread_exit()
    return 0;
}
