/********************************************
 * This program depicts the importance of volatile keyword to prevent compiler from optimizing variable "done"
 * Volatile tells compiler that this variable may change within some another interrupt service routine, thread, signal handler etc.
 * Steps:
 * 1. Run program without volatile keyword & optimization off
 * 2. Turn on the optimization & check behaviour
 * 3. Turn on optimization along with volatile keyword.
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