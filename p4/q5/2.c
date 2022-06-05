#include<stdio.h>
#include<conio.h>
void main () {
    int a[3][3],i,j;

    for (i =0; i!=3; i++) {
        for (j =0; j!=3; j++) {
            printf("enter a number :");
            scanf("%d",&a[i][j]);
        }
    }
}