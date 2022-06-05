#include<stdio.h>
#include<conio.h>
void main() {
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int b[3][3],i,j;

    for (i=0;i!=3;i++) {
        for (j=0;j!=3;j++) {
            b[i][j] = a[i][j];
        }
    }

    for (i=0; i!=3; i++) {
        for(j=0;j!=3;j++) {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
}