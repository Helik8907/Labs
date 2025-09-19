// PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE. 
#include <stdio.h>

int main(){

    int a,b;
    int op;

    printf("Enter the first no.:");
    scanf("%d",&a);
    printf("Enter the Second no.:");
    scanf("%d",&b);
    printf("Enter the Operation you want to perform:\n");
    printf("For Addition '1'.\n");
    printf("For Subtration '2'.\n");
    printf("For Multiplication '3'.\n");
    printf("For Division '4'.\n");
    scanf(" %d",&op);

    switch (op)
    {
    case 1:
        printf("The sum of %d and %d is %d.\n",a,b,a+b);
        break;
    case 2:
        printf("The difference of %d and %d is %d.\n",a,b,a-b);
        break;
    case 3:
        printf("The multiplication of %d and %d is %d.\n",a,b,a*b);
        break;
    case 4:
        printf("The Division of %d and %d is %.2f.\n",a,b,((float)a)/b);
        break;
    default:
        printf("The desired operation is not valid.\n");
        break;
    }

    return 0;
}