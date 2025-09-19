# include <stdio.h>

int main(){
    int a;
    float b,c;
    
    printf("Enter 1st Number:");
    scanf("%d",&a);
    printf("Enter 2nd Number:");
    scanf("%f",&b);

    c=a+b;

    printf("Sum of %d and %f is %f",a,b,c);

    return 0;
}