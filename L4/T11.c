// PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3...)

#include <stdio.h>

int main(){

    int inp ,t1 = 0,t2 = 1,t3;

    printf("Enter the term no:");
    scanf("%d",&inp);

    int temp = inp;

    if (inp == 1)
    {
        printf("1st term is %d\n",t1);
    }else if (inp == 2)
    {
        printf("2nd term is %d\n",t2);
    }else
    {
        while (temp >2)
    {
        t3 = t1 +t2;
        t1=t2;
        t2=t3;
        temp--;
    }
    printf("%d term is %d\n",inp,t3);
    }

    return 0;
}