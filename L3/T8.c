// PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>).
#include <stdio.h>

int main(){

    int base,pow,res=1;

    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the power of base:");
    scanf("%d",&pow);

    for (int i = 1; i <= pow; i++)
    {
        res*=base;
    }

    printf("The power of %d to %d is %d.\n",base,pow,res);    

    return 0;
}