// PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR.
#include <stdio.h>

int main(){

    char a;

    printf("Enter the char:");
    scanf("%c",&a);

    ((int)a>=97 && (int)a<=122)?printf("Your entered character %c is small case letter\n",a):printf("Your entered character %c is not small case letter\n",a);

    return 0;
}