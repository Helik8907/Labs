// PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE.
#include <stdio.h>

int main (){
    int sub1,sub2,sub3,sub4,sub5,tot;
    float avg;

    printf("Enter your five subject marks:");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    tot = sub1+sub2+sub3+sub4+sub5;
    avg = tot/5;

    printf("You scored total %d marks and you have %.2f%% in your exam.",tot,avg);

    return 0;
}