#include<stdio.h>
int main()
{
    int n,a,s=0;
    printf("enter the number to be checked for the prime number");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        if(n%a==0)
        {
            s=s+1;
        }
        a=a-1;
    }
    if(s==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime number");
    }
    return 0;


}
