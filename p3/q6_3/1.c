#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
    int num, temp, sum = 0;
    printf("enter a num :");
    scanf("%d",&num);
    temp = num;
    while(num != 0) {
        sum+=(pow(num%10,3));
        num/=10;
    }
    if (sum == temp) {
        printf("%d is armstrong number",temp);
    } else {
        printf("%d is not armstrong number",temp);
    }
}