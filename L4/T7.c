// PROGRAM TO REVERSE OF AGIVEN NO.
#include <stdio.h>
#include <math.h>

int main(){

    int inp,temp,rev=0;

    printf("Enter any no:");
    scanf("%d",&inp);

    temp = inp;

    while (temp>0)
    {
        rev= rev*10+(temp%10);
        temp/=10;
    }
    
        printf("Reverse of %d is %d\n",inp,rev);

    return 0;
}