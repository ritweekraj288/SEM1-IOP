#include<stdio.h>
int main()
{
    int a,n,t;
    printf("enter the number of which you want the table to be printed");
    scanf("%d",&a);
    for (n=1;n<11;n++)
    {
        t=a*n;
        printf("%d*%d=%d\n",a,n,t);
    }
    return 0;
}