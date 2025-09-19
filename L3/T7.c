//  PROGRAM TO CALCULATE FACTORIAL OF ANO.
#include <stdio.h>

int main(){

    int a,fac =1;

    printf("Enter the no. whose factorial you want to know:");
    scanf("%d",&a);

    for (int i = a; i > 0; i--)
    {
        fac*=i;
    }

    printf("The factorial of %d is %d.\n",a,fac);    

    return 0;
}