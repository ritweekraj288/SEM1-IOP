#include<stdio.h>
int main()
{
    int x,n,y;
    printf("enter the value of x and n");
    scanf("%d%d",&x,&n);
    if (n==1)
    {
        y=1+x;
        printf("value of y is%d",y);
    }
    if (n==2)
    {
        y=1+(x/n);
        printf("value of y is %d",y);
    }
    if (n==3)
    {
        y=1+(x*x*x);
        printf("value of y is %d",y);
    }
    if (n<1||n>3)
    {
        y=1+(n*x);
        printf("value of y is%d ",y);
    }
    return 0;
}