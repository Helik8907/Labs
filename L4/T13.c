// PROGRAM TO PRINT 1,3,5,7,9......n
#include <stdio.h>

int main(){

    int inp;

    printf("Enter the no:");
    scanf("%d",&inp);

    for (int i = 1; i <= inp; i+=2)
    {
        printf("%d ",i);
    }
    

    return 0;
}