// PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE. 
#include <stdio.h>

int main(){

    int a,b;
    char op;

    printf("Enter the first no.:");
    scanf("%d",&a);
    printf("Enter the Second no.:");
    scanf("%d",&b);
    printf("Enter the Operation you want to perform:\n");
    printf("For Addition '+'.\n");
    printf("For Subtration '-'.\n");
    printf("For Multiplication '*'.\n");
    printf("For Division '/'.\n");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        printf("The sum of %d and %d is %d.\n",a,b,a+b);
        break;
    case '-':
        printf("The difference of %d and %d is %d.\n",a,b,a-b);
        break;
    case '*':
        printf("The multiplication of %d and %d is %d.\n",a,b,a*b);
        break;
    case '/':
        printf("The Division of %d and %d is %.2f.\n",a,b,((float)a)/b);
        break;
    default:
        printf("The desired operation is not valid.\n");
        break;
    }

    return 0;
}