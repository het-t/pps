#include<stdio.h>

void main() {
    int i,sum = 0;

    for (i = 1; i < 25; i++) {
        if (i%2 == 0) continue;
        if (i%5 == 0) continue;
        if (i%6 == 0) continue;
        sum+=i;
    }
    printf("sum is = %d",sum);
}