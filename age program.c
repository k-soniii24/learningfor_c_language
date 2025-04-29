// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int age ;
 printf("enter your age - ");
 scanf("%d", &age);
 if ( age >= 18){
     printf("you can vote\n");
 }
 if ( age < 18){
     printf("you can not vote");
 }
    return 0;
}
