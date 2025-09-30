// PROGRAM TO CHECK WHETHER A NO IS Pallindrome OR NOT.
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
    
    if (rev == inp)
    {
        printf("%d is pallindrome.\n",inp);
    }
    else
    {
        printf("%d is not pallindrome\n",inp);
    }
    
    

    return 0;
}