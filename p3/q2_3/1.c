#include<stdio.h>

void main() {
    int num,r_num = 0,i;
    printf("enter a num : ");
    scanf("%d",&num);
    
    i = num;

    while(num != 0) {
        r_num = (r_num*10)+(num%10);
        num/=10;
    }
    printf("%d is revered number of %d",r_num,i);
}
// enter a num : 123456
// 654321 is revered number of 123456