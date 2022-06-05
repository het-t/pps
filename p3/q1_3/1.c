#include<stdio.h>

void main() {
    int num, ans = 1,pn;
    printf("enter a number : ");
    scanf("%d",&num);
    pn = num;
    for (num; num > 0; --num ) {
        ans*=num;
    }
    printf("factorial of %d is %d",pn,ans);
}
// enter a number : 6
// factorial of 6 is 720