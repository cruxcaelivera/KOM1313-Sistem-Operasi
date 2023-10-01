#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>


#define N 1000000
#define T 4

int count = 0;// Variable global
sem_t S;

void *counting(void *arg)
{
    int i;
    for (i = 0; i < N/T; i++){
        sem_wait(&S);
        count++;       // critical section
		sem_post(&S);
	}
    pthread_exit(NULL);
}

int main()
{
    pthread_t t[T];
    int i;
	sem_init(&S, 0, 1);
	
    for (i = 0; i < T; i++)
        pthread_create(&t[i], NULL, counting, NULL);

    for (i = 0; i < T; i++)
        pthread_join(t[i], NULL);

    printf("%d\n", count);      // 1000000, no?
    return 0;
}

