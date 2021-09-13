#include<stdio.h>
#include<unistd.h>

int main()
{
    pid_t p = fork();
    if(p==0) //child process
    {
        sleep(5);
        printf("I am child process with id : %d\n",getpid());
        printf("My parent process id : %d\n",getppid());
    }
    else
    {
        printf("I am parent process with id : %d\n",getpid());
        printf("My child process id : %d\n",p);

    }
    return 0;
}