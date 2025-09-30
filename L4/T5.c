// PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
#include <stdio.h>
#include <math.h>

int main(){

    int inp,nD=0,sum=0,temp;

    printf("Enter any no:");
    scanf("%d",&inp);
    temp = inp;
    while (temp>0)
    {
        nD++;
        temp/=10;
    }

    temp = inp;

    for (int i= 0; i<nD; i++)
    {
        sum += pow(temp%10,nD);
        //printf("=%lf\n",pow(temp%10,nD));
        temp/=10;
    }

    //printf("%f",sum);

    if (inp==sum)
    {
        printf("%d is an Amstrong no.\n",inp);
    }
    else
    {
        printf("%d is not an Amstrong no.\n",inp);
    }
        

    return 0;
}