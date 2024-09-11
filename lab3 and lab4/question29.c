#include<stdio.h>
int main()
{
    int n,a,b,c,s=0;
    printf("enter the number to be checked");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        b=a%10;
        s=(s*10)+b;
        a=a/10;
        
    }
    if(s==n)
    {
        printf("pallindrome number");
    }
    else
    {
        printf("not a pallindrome number");
    }
    return 0;


}