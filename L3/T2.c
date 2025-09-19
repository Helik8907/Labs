//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&) 
#include <stdio.h>

int main(){

    int a,b,c;

    printf("Enter No. 1:");
    scanf("%d",&a);
    printf("Enter No. 2:");
    scanf("%d",&b);
    printf("Enter No. 3:");
    scanf("%d",&c);

    if (a>b && a>c){
        printf("The First No. %d is the biggest\n",a);
    }
    else if (b>c){
            printf("The Second No. %d is the biggest\n",b);
        }
        else{
            printf("The Third No. %d is the biggest\n",c);
        } 
    
    

    return 0;
}