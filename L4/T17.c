// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
#include <stdio.h>

int main(){

    int inp = 0 ,sum=0;

    while (inp>=0)
    {
        sum+=inp;
        printf("Enter no:");
        scanf("%d",&inp);
    }
    
    printf("Sum of your entered value is %d\n",sum);

    return 0;
}