#include<stdio.h>

void main() {
    int i,num,sum = 0;
    for (i = 1; i != 10; i++) {
        
        printf("enter a number : ");
        scanf("%d",&num);

        if (num < 0) break;

        sum += num;
    }

    printf("\nsum is %d",sum);
}
// enter a number : 123
// enter a number : 5
// enter a number : 0
// enter a number : -1

// sum is 128