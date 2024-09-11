#include<stdio.h>
int main()
{
    int n,a,s=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        s=s+a;
        n=n/10;
    }
    printf("sum of the digits of the entered number is %d",s);
    return 0;


}