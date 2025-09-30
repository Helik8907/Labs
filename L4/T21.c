// WRITE A PROGRAM IN C FOR THE FOLLOWING.
// AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS.
#include <stdio.h>

int main(){

    float inp;
    float charge=0;

    printf("Enter your power consumption:");
    scanf("%f",&inp);

    if (inp<=200)
    {
        charge= inp*0.5;
    }else if (inp<=400)
    {
        charge=100+((inp-200)*0.65);
    }else if (inp<=600)
    {
        charge=230+((inp-400)*0.8);
    }else{
        charge=425+((inp-600)*1.25);
    }
    
    printf("Power Charge on consumption of %.2f unit is %.2f rupee.\n",inp,charge);

    return 0;
}