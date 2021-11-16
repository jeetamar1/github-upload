#include<stdio.h>
int main()
{
    int number;
    printf("enter the number",number);
    scanf("%d",number);
    if(number%2==0)
    printf("the number is even",number);
    else
    printf("the number is odd");
    return 0;
}