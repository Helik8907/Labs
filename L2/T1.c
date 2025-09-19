#include <stdio.h>

int main(){
    float principle,rate, time;
    
    printf("Enter the principle amount:");
    scanf("%f",&principle);
    printf("Enter the rate of interest p.a.:");
    scanf("%f",&rate);
    printf("Enter the time period:");
    scanf("%f",&time);

    printf("The interest you will get after the %.1f years at rate of %.2f%% is %.2f",time,rate,(principle*rate*time)/100);

    return 0;
}