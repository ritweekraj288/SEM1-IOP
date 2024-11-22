#include<stdio.h>
void armstrong(int num)
{ 
    int store,a,sum=0;
    store=num;
    while(num>0)
    {
        a=num%10;
        sum+=a*a*a;
        num/=10;
    }
    if(sum==store)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }
}
int main()
{
    int n;
    printf("enter the number to be checked");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}