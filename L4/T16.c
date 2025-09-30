// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4 /4/,........N.
#include <stdio.h>

int main(){

    int inp,fac=1;
    float sum=0;

    printf("Enter the term no:");
    scanf("%d",&inp);

    for (int i = 1; i <=inp; i++)
    {
        fac*=i;
        sum+= (float)i/fac;
    }
    
    printf("%d terms sum is %.2f\n",inp,sum);

    return 0;
}