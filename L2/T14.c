// PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR ASPECIAL SYMBOL.
#include <stdio.h>

int main(){

    char a;

    printf("Enter a character: ");
    scanf("%c",&a);

    if ((int)a == 32){
        printf("You Entered space.\n");
    }
    else if (((int)a >= 33 && (int)a <=47)||((int)a >= 58 && (int)a <=64) ||((int)a >= 91 && (int)a <=96) || ((int)a >= 123 && (int)a <=126)){
        printf("You Entered Special Symbol.\n");
    }
    else if ((int)a >= 48 && (int)a <=57)
    {
        printf("You Entered Digit.\n");
    }
    else if ((int)a >= 65 && (int)a <=90)
    {
        printf("You Entered Capital Letter.\n");
    }
    else
    {
        printf("You Entered Small Letter.\n");
    }
    
    
        

    return 0;
}