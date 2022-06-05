#include<stdio.h>
#include<conio.h>
void main() {
    int a[10],i,j,max,min,temp;

    for (i=0; i!=10; i++) {
        printf("enter number :");
        scanf("%d",&a[i]);
    }
    max = a[0];
    temp = a[0];
    for (i=0;i!=10;i++) {
        if (a[i] > temp ) {
            max = a[i];
            for (j=0; j!= 10; j++) {
                if (a[j] > max) {
                    max = a[j];
                }
            }
        }
    }

    min = a[0];
    temp = a[0];
    for (i=0;i!=10;i++) {
        if (a[i] < temp ) {
            min = a[i];
            for (j=0; j!= 10; j++) {
                if (a[j] < min) {
                    min = a[j];
                }
            }
        }
    }

    printf("%d is maximum number in array\n",max);
    printf("%d is minimum number in array",min);
}