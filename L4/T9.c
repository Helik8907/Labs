// 32. PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .
#include <stdio.h>

int main(){

    int inp,max1,max2=0;

    printf("Enter how many no. you want to add");
    scanf("%d",&inp);

    int num[inp];

    for (int i = 0; i < inp; i++)
    {
        printf("Enter %d value:",i);
        scanf("%d",&num[i]);
    }

    max1=num[0];

    for (int i = 1; i < inp; i++)
    {
        if (num[i]>max1)
        {
            max2=max1;
            max1=num[i];
        }else if (num[i]>max2)
        {
            max2 = num[i];
        }   
    }

    printf("1st max is %d and second max is %d\n",max1,max2);        

    return 0;
}