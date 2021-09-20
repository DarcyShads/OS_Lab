//ZOMBIE PROCESS

#include<stdio.h>
#include<unistd.h>

int main()
{
    int pid=fork();
    if(pid==0)
        printf("this is child process with pid : %d, and parent id : %d",getpid(),getppid());
    else if(pid>0)
    {
        wait(NULL);
        sleep(60);
        printf("this is parent process with pid : %d, and grandparent process id : %d",getpid(),getppid());
    }
    else
        printf("Process not created");
    return 0;
}

/*

*************NOTE******************
Use Command : ps -e -o pid,stat
to print process table 

*/