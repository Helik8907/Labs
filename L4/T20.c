// WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
// If sales<=Rs. 500, commission is 5%
// If sales>but <=2000, commission is Rs. 35 plus 10% above Rs. 500
// If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
// If sales>5000, commission is 12.5%
#include <stdio.h>

int main(){

    float inp;
    float com=0;

    printf("Enter your sales:");
    scanf("%f",&inp);

    if (inp<=500.0)
    {
        com= inp*0.05;
    }else if (inp<=2000)
    {
        com=35+((inp-500)*0.1);
    }else if (inp<=5000)
    {
        com=185+((inp-2000)*0.12);
    }else{
        com=inp*0.125;
    }
    
    printf("Sales commission on sales of %.2f rupee is %.2f rupee.\n",inp,com);

    return 0;
}