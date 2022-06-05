#include<stdio.h>
#include<conio.h>
void main() {
    int a[3][3], b[3][3], multi[3][3] = {
        {0,0,0},{0,0,0},{0,0,0}
    }, i, j, t;

    for (i=0; i!=3; i++) {
        for (j=0;j!=3;j++) {
            printf("enter number :");
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i!=3; i++) {
        for (j=0;j!=2;j++) {
            printf("enter number :");
            scanf("%d",&b[i][j]);
        }
    }

    for (i=0;i!=3;i++) {
        for (j=0;j!=3;j++) {
            t = j;
            multi[i][t] += a[i][j]*b[j][i];
        }
    }

    for (i=0;i!=3;i++) {
        for (j=0;j!=3;j++) {
            printf(" %d ",multi[i][j]);
        }
        printf("\n");
    }
}