// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
#include <stdio.h>
#include<math.h>

int main(){

    int inp;

    printf("Enter any no:");
    scanf("%d",&inp);

    if (inp == 1)
    {
        printf("%d is niether prime nor composite.\n");
        return 0;
    }
    

    for (int i = 2; i <= sqrt(inp); i++)
    {
        if (inp%i==0 && i != inp)
        {
            printf("The %d is composite no.\n",inp);
            return 0;
        }
        
    }
    printf("The %d is prime no.\n",inp);

    return 0;
}