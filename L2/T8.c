// EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES 
#include <stdio.h>

int main(){

int sec=31558150;

float D,H,M;

M= sec/60.0;
H=((float) sec/60)/60;
D=H/24;

printf("No. of Days in a year = %.2f.\n",D);
printf("No. of Hours in a year = %.2f.\n",H);
printf("No. of Minutes in a year = %.2f.",M);

return 0;
}