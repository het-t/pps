#include<stdio.h>
#include<conio.h>
void main() {
    int a[10],i,sum=0;

    for (i=0; i!=10; i++) {
        printf("enter number :");
        scanf("%d",&a[i]);
    }

    for (i=0;i!=10;i++){
        sum+=a[i];
    }

    printf("%d is sum of all elements of array",sum);
}