/********************************************
 * Semaphore - syncronization (unsigned int)
 * Changes are atomic - one at a time
 * only 2 operations:
 * 1. wait() - Decrements the semaphore value
 * 2. post() - Increments
 *  
 ********************************************/
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>

//volatile bool done = false;
bool done = false;

void *tfunc(void *arg)
{
    sleep(1);
    done = true;
    return NULL;
}

int main()
{
    pthread_t t1;
    pthread_create(&t1, NULL, tfunc, NULL);

    printf("waiting...\n");
    while(!done) {}
    printf("Ok, moving on\n");
}