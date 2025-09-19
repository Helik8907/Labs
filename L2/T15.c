#include <stdio.h>

int main(){

    int sub1,sub2,sub3,sub4,sub5;

    printf("Enter your five subject marks:");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    if ((sub1+sub2+sub3+sub4+sub5)/5 >90){
        printf("You passed with division A.\n");
    } 
    else if ((sub1+sub2+sub3+sub4+sub5)/5 >80){
        printf("You passed with division B.\n");
    }
    else if ((sub1+sub2+sub3+sub4+sub5)/5 >70){
        printf("You passed with division C.\n");
    }
    else if ((sub1+sub2+sub3+sub4+sub5)/5 >50){
        printf("You passed with division D.\n");
    }
    else if ((sub1+sub2+sub3+sub4+sub5)/5 >35){
        printf("You passed with division E.\n");
    }
    else{
        printf("You failed with division F.\n");
    }

    return 0;
}