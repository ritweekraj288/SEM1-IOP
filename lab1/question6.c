#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values for the variables that you want to swap");
    scanf("%d%d",&a,&b);
    printf("the values of a and b are respectively %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the values of a and b are respectively %d and %d",a,b);
    return 0;
}