// PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR.
#include <stdio.h>

int main(){

    int a,b,c,res;

    printf("Enter No. 1:");
    scanf("%d",&a);
    printf("Enter No. 2:");
    scanf("%d",&b);
    printf("Enter No. 3:");
    scanf("%d",&c);

    res =a;

    res = (b>a)&&(b>c)?b:res;
    res = (c>a)&&(c>a)?c:res;

    printf("The greatest no. is %d.\n",res);

    return 0;
}