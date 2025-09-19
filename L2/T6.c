#include <stdio.h>

int main(){

int a,b;

a=10;
b=50;

printf ("Before swaping a=%d and b=%d.\n",a,b);

a=a-b;
b=b+a;
a=b-a;

printf ("After swaping a=%d and b=%d.\n",a,b);

return 0;
}