// PROGRAM TO PRINT 2,4,6,8,10,12.....n
#include <stdio.h>

int main(){

    int inp;

    printf("Enter the no:");
    scanf("%d",&inp);

    for (int i = 2; i <= inp; i+=2)
    {
        printf("%d ",i);
    }
    

    return 0;
}