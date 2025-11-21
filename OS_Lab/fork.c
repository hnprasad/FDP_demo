#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int  main()
{
    int pid;
    printf("Before fork\n");
    pid=fork();
    if(pid<0)
    {
        printf("Fork failed\n");
    }
    else if(pid==0)
    {
        printf("Child process: Hello from child with id!\n", getpid());
    }
    else
    {
        printf("Parent process%d: Hello from parent! Child PID: %d\n", getpid(), pid);
    }
    printf("This line is executed by both parent and child processes.\n");
    return 0;
}