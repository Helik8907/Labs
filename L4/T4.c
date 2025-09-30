// PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
#include <stdio.h>
#include<math.h>

int main(){

    int inp;

    printf("Enter any no:");
    scanf("%d",&inp);

    for (int i = 2; i <= sqrt(inp); i++)
    {
        if (inp%i==0 && i != inp)
        {
            printf("The %d is not prime no.\n",inp);
            return 0;
        }
        
    }
    printf("The %d is prime no.\n",inp);

    return 0;
}