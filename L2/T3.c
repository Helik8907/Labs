#include <stdio.h>

int main(){

float BSalary, HRA, SA ,preq,Bonus,GSalary;

printf("Enter your Base Salary:");
scanf("%f",&BSalary);
printf("Enter your HRA:");
scanf("%f",&HRA);
printf("Enter your Special Allowance:");
scanf("%f",&SA);
printf("Enter your Prequisites:");
scanf("%f",&preq);
printf("Enter your Bonuses:");
scanf("%f",&Bonus);

GSalary = BSalary+ HRA+ SA +preq+Bonus;

printf("Your Gross Salary is %.2f rupee",GSalary);

return 0;
}