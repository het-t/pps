#include<stdio.h>

void main() {
    int i,j,flag = 1;

    for (i = 1; i <= 4; i++) {
        j = 1;
        for (j = 1; j <= i; j++) {
            printf("%d",flag);
            flag = !flag;
        }
        printf("\n");
    }
}