// SYNCRONIZATION OF PROCESSES

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    int pid=fork();
    if(pid==0)
    {
        sleep(5); //sleeps for 5 sec
        printf("Child process id : %d \tParent process id : %d\n",getpid(),getppid());
    }
    else if(pid>0)
    {
        wait(NULL); //waits for the child process to execute
        printf("Parent process id : %d \tGrand Parent process id : %d\n",getpid(),getppid());
    }
    else
    {
        printf("Child process could not be created\n");
    }
    return 0;
}