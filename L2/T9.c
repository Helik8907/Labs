// PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.
#include <stdio.h>

int main(){

int H,M,S;

printf("Enter time in HH MM SS format:");
scanf("%d %d %d",&H,&M,&S);

printf("Time in second is %d.",(H*60*60)+(M*60)+S);

return 0;
}