// PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER.
#include <stdio.h>

int main(){

    char a;

    printf("Enter the char whose ASCII value you want to know: ");
    scanf("%c",&a);
    
    printf("The ASCII value of %c is %d.",a,a);

    return 0;
}