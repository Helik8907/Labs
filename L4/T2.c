// PROGRAM TO PRINT TABLE OF ANY NO.
#include <stdio.h>

int main(){

    int inp;

    printf("Enter the no. whose table you want:\n");
    scanf(" %d",&inp);

    for (int i = 1; i <=10; i++)
    {
        printf("%d x %d = %d\n",inp,i,inp*i);
    }
    

    return 0;
}