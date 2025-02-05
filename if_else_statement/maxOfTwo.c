//WAP to find maximum of two number
#include<stdio.h>
    int main(){
    int num1, num2;
    printf("Enter Two Number:");
    scanf("%d%d", &num1, &num2);
    if(num1>num2){
        printf("%d is maximium", num1);
    }else{
        printf("%d is maximum", num2);
    }
    return 0;
}