01.c
//if else condition
if(condition){
    //statement;
} else {
    //statement
}

//Enter your age and verify whether you are eligible or not for election voting using if else
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    if( age >= 18){
        printf("\nYou are eligible for voting\n");
    } else if( age < 0) {
        printf("\nInvalid age\n");
    } else {
        printf("\nYou are not eligible for voting\n");
    }
    return 0;
}

-------------------------
02.c
//Ternary Operator
//condition? expression1 : express2;
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    (age >= 18)? printf("You can vote") : printf("You cannot vote");
    return 0;
}

-------------------------
03.c
//switch case
//input: Enter the number between 1 to 7: 1
//output: Today is sunday!

#include <stdio.h>
int main(){
    int number;
    printf("Enter the number between 1 to 7: ");
    scanf("%i", &number);
    switch(number){
        case 1:
        printf("\nToday is Sunday!\n");
        break;

        case 2:
        printf("\nToday is Monday!\n");
        break;

        case 3:
        printf("\nToday is Tuesday!\n");
        break;

        case 4:
        printf("\nToday is Wednesday!\n");
        break;

        case 5:
        printf("\nToday is Thursday!\n");
        break;

        case 6:
        printf("\nToday is Friday!\n");
        break;

        case 7:
        printf("\nToday is Saturday!\n");
        break;

        default:
        printf("\nInvalid Number.Choose from (1-7)\n");
    }
    return 0;
}

-------------------------
04.c

/*Write a code for small astrology based on your life path number for that get date of birth from user then calculate life path number.(use switch case)
Example
Calculation for life path number:
     a = date % 10
     b = date / 10
     c = a + b

     if life path number
         1:Lucky
         2:Carefully do your work
         3.Storger
         4.Happy 
         5.Can get help
         6.Doubt
         7.Sad
         8.Like
         9.Courage */

#include <stdio.h>
int main(){
    int date;
    printf("Enter date (1-31): ");
    scanf("%i", &date);

    if(date > 0 && date <= 31){
        int a = date % 10;
        int b = date / 10;
        int c = a + b;

        switch(c){
            case 1:
            printf("\nLucky\n");
            break;
    
            case 2:
            printf("\nCarefully do your work\n");
            break;
    
            case 3:
            printf("\nStorger\n");
            break;
    
            case 4:
            printf("\nHappy\n");
            break;
    
            case 5:
            printf("\nCan get help\n");
            break;
    
            case 6:
            printf("\nDoubt\n");
            break;
    
            case 7:
            printf("\nSad\n");
            break;
    
            case 8:
            printf("\nLike\n");
            break;
    
            case 9:
            printf("\nCourage\n");
            break;
    
            default:
            printf("\nOther\n");
        }
    } else {
        printf("\nEnter a date between (1-31)");
    }
    return 0;
}

-------------------------
05.c
//fibonacci series
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d:\n", n);

    while (a <= n) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

-------------------------
06.c
//Factorial series
#include <stdio.h>
int main(){
    int number;
    int factorial = 1;
    printf("\nEnter a positive number: ");
    scanf("%d", &number);

    if(number > 0){
        for(int a = 1; a <= number; a++){
            factorial = factorial * a;
        } 

        printf("Factorial of %d is %d \n", number, factorial);

    } else {
        printf("\nEntered number is negative\n");
    }
     
    return 0;
}

