// PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
#include <stdio.h>

int main(){

float fah, cel;

printf("Enter fahrenheit temperature:");
scanf("%f",&fah);

cel = (5/9)*(fah-32);

printf("The %.2f\370F is %.2f\370C.",fah, cel);

return 0;
}