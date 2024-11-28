#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()
{
    int num1,num2;
    printf("enter the two numbers to be compared");
    scanf("%d%d",&num1,&num2);
    printf("maximum number among two is %d",MAX(num1,num2));
    return 0;
}