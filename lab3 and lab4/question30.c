#include<stdio.h>
int main()
{
    int n,a,b,s;
    printf("enter the number to be reversed");
    scanf("%d",&n);
    s=0;
    while(n>0)
    {
        a=n%10;
        s=(s*10)+a;
        n=n/10;
    }
    printf("the reversed number is%d",s);
    return 0;
}