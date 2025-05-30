01.
#include <stdio.h>
#include <stdlib.h>//for sleep
#include <unistd.h>//foe exit

int main(){
    printf("Program started\n");
    printf("Sleeping for 3 second...\n");
    sleep(3);//pause for second

    printf("Exiting the program\n");
    exit(0);

    //exit(1) -> still running
    //exit(-1) -> terminate unscussefully
}
..............................................
02.
#include <stdio.h>
#include <stdlib.h>//for sleep
#include <unistd.h>//foe exit
#include <sys/wait.h>

int main(){
    pid_t pid;

    printf("Parent process started. PID: %d\n", getpid());

    pid = fork ();//create a new child process
    

    if(pid < 0){
        perror("fork failed");
        exit(1);
    }

    if(pid == 0){
        //child process
        printf("child process. PID: %d, sleeping for 2 seconds...", getpid());
        sleep(2);
        printf("child process exiting.\n");
        exit(0);//child exit with status 0
    }else{
        int status;
        printf("Parent waiting for child to finish...\n");
        wait(&status);//wait for child to finish
        if(WIFEXITED(status)){
            printf("Child exited with status %d\n", WIFEXITED(status));
        }else{
            printf("child did not exit normally\n");
        }
        printf("Parent process ending\n");
    }
    return 0;
}
..............................................

03.
Exercise:
first child:slept for 1 second.
second child:slept for 3 second.
parent:both childern have finisehd.


#include <stdio.h>
#include <stdlib.h>//for sleep
#include <unistd.h>//foe exit
#include <sys/wait.h>

int main(){
    int f1 = fork();
    if(f1 < 0){
        printf("Fork failde\n");
        exit(0);
    }else if(f1 ==0){
        printf("I'm child process. ParentID %d\n", getppid());
        printf("Sleeping for 1 second...\n");\
        sleep(1);
        printf("Child 1 Exiting.\n");
        exit(0);
    }else{
        int f2 = fork();
        if(f2 == 0){
            printf("I'm child 2 process.Parent ID %d\n", getpid());
            printf("Sleeping for 2 second...\n");
            sleep(2);
        }
    }
    return 0;
}
