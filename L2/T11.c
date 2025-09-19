// PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include <stdio.h>

int main(){

    int H,M,S;

    printf ("Enter total time in second: ");
    scanf("%d",&S);

    H = S/3600;
    M = (S-(H*3600))/60;
    S = S -(H*3600)-(M*60);

    printf("Time you entered is %d:%d:%d",H,M,S);

    return 0;
}