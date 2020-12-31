#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
sem_t mutex;
void* thread(void* arg)
{
    sem_wait(&mutex);

    int fork1 = fork();
    int fork2 = fork();

    sleep(4);

if (fork1 < 0)
  {
  fprintf(stderr, "fork failed\n");
  }
else if (fork1 == 0)
  {
  printf("Process (pid:%d) printing\n", (int) getpid());
  }
else
  {
  printf("process (pid:%d) printing\n", (int) getpid());
  }
   sem_post(&mutex);


}


int main()
{
    sem_init(&mutex, 0, 1);
    pthread_t t1,t2,t3,t4;
    pthread_create(&t1,NULL,thread,NULL);
    sleep(2);
    pthread_join(t1,NULL);
    sem_destroy(&mutex);
    return 0;
}

