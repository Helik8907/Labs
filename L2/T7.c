#include <stdio.h>

int main(){

float b,h,area;

printf("Enter Base of triangle:");
scanf("%f",&b);
printf("Enter height of triangle:");
scanf("%f",&h);

area =(b*h)/2;

printf("Area of given triangle is %.2f",area);

return 0;
}