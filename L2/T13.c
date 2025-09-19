#include <stdio.h>

int main(){

    int a;

    printf("Enter any the number: ");
    scanf("%d",&a);

    if (a%2 == 0)
    {
        printf("You entered even number.\n");
    }
    else{
        printf("You entered odd number.\n");
    }

    return 0;
}