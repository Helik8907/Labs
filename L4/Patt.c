#include <stdio.h>

int main(){

    int inp=10;

    for (int i = 1; i <= inp; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            
            if (i<2||(j==1 || j == i)||i==inp)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    

    return 0;
}