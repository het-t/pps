#include<stdio.h>
#include<conio.h>
void main() {
    int a[10],i,p_counter=0,n_counter=0;

    for (i=0; i!=10; i++) {
        printf("enter number :");
        scanf("%d",&a[i]);
    }

    for (i=0; i!= 10; i++) {
        if (a[i] > 0) p_counter++;
        else if (a[i] < 0 ) n_counter++;
    }

    printf("number of positive numbers in array is %d\n",p_counter);
    printf("number of negative numbers in array is %d",n_counter);

}