// PROGRAM TO PRINT 1,4,9,16,25, ......n
#include <stdio.h>
#include<math.h>

int main(){

    int inp;

    printf("Enter the no:");
    scanf("%d",&inp);

    for (int i = 1; i <= inp; i++)
    {
        printf("%.0lf ",pow(i,2));
    }
    

    return 0;
}