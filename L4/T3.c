// PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TON.
#include <stdio.h>

int main(){

    int inp,odd=0,even=0;
    
    printf("Enter any no:");
    scanf(" %d",&inp);

    for (int i = 1; i <= inp; i++)
    {
        if (i%2 == 0){
            even +=i;
        } 
        else{
            odd +=i;
        }
    }

    printf("Sum of all odd no. 1 to %d is %d\n",inp,odd);
    printf("Sum of all even no. 1 to %d is %d\n",inp,even);

    return 0;
}