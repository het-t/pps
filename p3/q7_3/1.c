#include<stdio.h>

void main() {
    int num, i;
    printf("enter a number :");
    scanf("%d",&num);

    if (num>2){
        for (i = 2; i < num; i++) {
        if (num%i == 0) 
        {
            printf("%d is not a prime number",num);
            break;
        }
        else if (i == num){
            printf("%d is a prime number",num);
            break;
        }
        }
    }
    else {
        printf("%d is a prime number",num);
    }
}

// enter a number :6
// 6 is not a prime number