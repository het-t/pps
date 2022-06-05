#include<stdio.h>

void main() {
    int num, ans, i, j;

    printf("enter a number : ");
    scanf("%d",&num);

    j = num;
    for (num;num != 0;num--) {
        ans+=(num*num);
    }

    for(i = 1; i != j; ++i) {
        printf("%d^2 + ",i);
    }
    printf("%d^2 ",i);
    
    printf("= %d",ans);
}

// enter a number : 6
// 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 = 91