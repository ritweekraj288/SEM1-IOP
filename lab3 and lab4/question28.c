#include<stdio.h>
int main()
{
    int a,b,c,n,s=0;
    printf("enter the number that you want to check whether it is armstrong or not");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        b=n%10;
        n=n/10;
        s=s+(b*b*b);
    }
    if(s==a)
    {
        printf("given number is armstrong");
    }
    else
    {
        printf("given number not armstrong");
    }
}