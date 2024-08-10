#include <iostream>
#include <pthread.h>

using namespace std;
void* startMyFunction(void *arg){
    cout <<"started my function successfuly"<<endl;
    pthread_exit(NULL);
}

int main(){
    //delcare thread identifier
    pthread_t threadId;
    int ret;
    cout<<"In Main::creationg threead"<<endl;
    //thread creation
    ret = pthread_create(&threadId,NULL,&startMyFunction,NULL);
    if(ret != 0){
        cout <<"Thread creation failed"<<endl;    
    }
    else{
        cout <<"Thread creation Successed"<<endl;    
    }
    return 0;
}
}