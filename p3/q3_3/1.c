#include<stdio.h>

void main () {
    int num,sum = 0,i;

    printf("enter a number : ");
    scanf("%d",&num);

    i = num;

    while(num != 0) {
        sum+=(num%10);
        num/=10;
    }

    printf("%d is sum of all digits of %d",sum,i);
}

// enter a number : 123
// 6 is sum of all digits of 123