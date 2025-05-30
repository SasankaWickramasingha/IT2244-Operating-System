01.
#include <stdio.h>
#include <unistd.h>

int main(){
    fork();
    printf("Hello world\n");
}
...........................................
02.
#include <stdio.h>
#include <unistd.h>

int main(){
    int f1 = fork();
    if(f1 == 0){
        printf("\nI'm child process.My parent process id is %d\n",getppid());
    }else{
        printf("\nI'm parent process.My id is %d", getpid());
    }

}
.............................................

03.
//print numbers from 1 to 10 and 
//1 to 5 should be print by child process and 
//from 6 to 10 should be parent process
//calculate summation of those numbers
#include <stdio.h>
#include <unistd.h>

int main(){
    int sumChild = 0;
    int sumParent = 0;
    
    int f1 = fork();
    if(f1 == 0){
        printf("\nI'm child process.");
        for(int a = 1;a <= 5; a++){
            printf(" %d ", a);
            sumChild += a;
        }
        printf("\nChild process summation:%d\n", sumChild);
    }else{
        printf("\nI'm parent process.");
        for(int b = 6; b <= 10; b++){
            printf(" %d ", b);
            sumParent += b;
        }
        printf("\nParent process summation:%d\n", sumParent);
    }
    
return 0;
}

.............................................