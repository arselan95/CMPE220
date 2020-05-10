#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
pthread_t tid[2];
void* test(void* arg)
{
 unsigned long i = 0;
 pthread_t pid = pthread_self();
 if (pthread_equal(pid, tid[0]))
 {printf("\n thread 1...\n");}
 else
 {printf("\n thread 2...\n");}
 for (i = 0; i < (0xFFFFFFFF); i++);
 return NULL;
}



int main(void)
{
 int i = 0;
 int error;
 
 while (i < 2){
 error = pthread_create(&(tid[i]), NULL, &test, NULL);
 if (error != 0)
 printf("\nthread failure :[%s]", strerror(error));
 else
 printf("\n Thread success\n");
 i++;}

 sleep(5);
 return 0;
}