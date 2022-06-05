#include<stdio.h>

void main() {
    int num,i;
    float ans = 0;
    
    printf("enter a number : ");
    scanf("%d",&num);

    for (i = 1; i < num; i++) {
        printf("1/%d + ",i);
    }
    printf("1/%d = ",num);

    while (num > 0) {
        ans = ans + (1.0/num);
        num--;
    }
    printf("%f",ans);

}

// enter a number : 6
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 = 2.450000