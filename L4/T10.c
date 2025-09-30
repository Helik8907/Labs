// PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include <stdio.h>

int main(){

    int inp,mx,mn;

    printf("Enter how many no. you want to add");
    scanf("%d",&inp);

    int num[inp];

    for (int i = 0; i < inp; i++)
    {
        printf("Enter %d value:",i);
        scanf("%d",&num[i]);
    }

    mx = mn =num[0];

    for (int i = 1; i < inp; i++)
    {
        mx=(num[i]>mx)?num[i]:mx;
        mn=(num[i]<mn)?num[i]:mn;
    }

    printf("max is %d and min is %d\n",mx,mn);        

    return 0;
}