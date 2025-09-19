// PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE. 
#include <stdio.h>

int main(){

int a,b,c;

a=10;
b=50;

printf ("Before swaping a=%d and b=%d.\n",a,b);

c=a;
a=b;
b=c;

printf ("After swaping a=%d and b=%d.\n",a,b);

return 0;
}