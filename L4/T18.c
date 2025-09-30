// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28=1,2,4,7,14,28)
#include <stdio.h>

int main(){

    int inp;

    printf("Enter the no:");
    scanf("%d",&inp);

    printf("Factor of %d = ",inp);

    for (int i = 1; i <= inp; i++)
    {
        if (inp%i == 0)
        {
            printf("%d ",i);
        }
        
    }
    

    return 0;
}