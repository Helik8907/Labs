#include <stdio.h>

int main(){

    int inp=10,st=0;

    for (int i = 0; i < inp; i++)
    {
        for (int j = 0; j < inp*2-1; j++)
        {
            
            if (j==0 || j == inp*2-2||i==inp-1||j==st || j==(inp*2-2)-st)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        st++;
        printf("\n");
    }
    

    return 0;
}