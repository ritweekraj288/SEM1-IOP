#include<stdio.h>
int main()
{
    int n,p,a;
    printf("enter the base and the power respectively\n");
    scanf("%d%d",&n,&p);
    for(a=1;p>0;p--)
    {
        a=a*n;
    }
    printf("the final result is %d",a);
    return 0;

}