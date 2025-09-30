// WRITE A C PROGRAM TO FIND THE VALUE OF YUSING

// 1+x where n=1
// 1+x/n where n=2
// Y(x,n) = 1 +x» when n=3
// 1+nx when n>3 or n<1
#include <stdio.h>
#include <math.h>

int main(){

    float x,y;
    int n;
     printf("Enter the value of x:");
     scanf(" %f",&x);

    printf("Enter value of n:");
    scanf(" %d",&n);

    if (n==1)
    {
        y=x+1;
    }
    else if (n==2)
    {
        y=1+x/n;
    }
    else if (n==3)
    {
        y=1+pow(x,n);
    }else
    {
        y=1+n*x;
    }

    printf("The value of y at x=%.2f and n=%d is %.2f\n",x,n,y);
    
    return 0;
}