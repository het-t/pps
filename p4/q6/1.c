#include<stdio.h>
#include<conio.h>
void main() {
    int a[3][3], b[3][3], sum[3][3] = {
        {0,0,0},{0,0,0},{0,0,0}
    }, i, j;

    for (i=0; i!=3; i++) {
        for (j=0;j!=3;j++) {
            printf("enter number :");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i!=3; i++) {
        for (j=0;j!=3;j++) {
            printf("enter number :");
            scanf("%d",&b[i][j]);
        }
    }

    for (i=0; i!=3; i++) {
        for (j=0;j!=3;j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i=0; i!=3; i++) {
        for (j=0;j!=3;j++) {
            printf(" %d ",sum[i][j]);
        }
        printf("\n");
    }   
}