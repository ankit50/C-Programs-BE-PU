// WAP to find sum of n natural number
#include <stdio.h>
int main(){
    int num, i = 1, sum = 0;
    printf("Enter number :");
    scanf("%d", &num);
    while (i <= num)
    {
        sum = sum + i;
        i++;
    }
    printf("\nThe sum is :%d", sum);
    return 0;
}