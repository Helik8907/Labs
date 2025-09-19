/*
WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE
FORMULA.
CM =M/2+P/2+C/2+E
WHERE CM = Cut of f mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100
*/
#include <stdio.h>

int main(){

    int P,C,M,E;
    float CM;

    printf("Enter your Physics Marks out of 200:");
    scanf("%d",&P);
    printf("Enter your Chemistry Marks out of 200:");
    scanf("%d",&C);
    printf("Enter your Maths Marks out of 200:");
    scanf("%d",&M);
    printf("Enter your Entrance Exam Marks out of 100:");
    scanf("%d",&E);

    CM =(P+C+M)/2.0+E;

    printf("Your Cut off marks is %.2f",CM);

    return 0;
}