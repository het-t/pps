#include<stdio.h>

void main() {
    int i,j;

    for (i = 1; i <= 4; i++) {
        j = 1;
        for (j = 1; j <= i; j++) {
            printf("%d",i);
        }
        printf("\n");
    }
}
// 1
// 22
// 333
// 4444