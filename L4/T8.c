// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A‘N’ DIGIT NO.
#include <stdio.h>
#include <math.h>

int main(){

    int inp,temp,sum=0;

    printf("Enter any no:");
    scanf("%d",&inp);

    temp = inp;

    while (temp>0)
    {
        sum+=(temp%10);
        temp/=10;
    }
    
        printf("Sum of digits of %d is %d\n",inp,sum);

    return 0;
}