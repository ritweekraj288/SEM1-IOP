#include<stdio.h>
int main()
{
    int a=2,n;
    printf("enter the number of terms of the even number series to be displayed\n");
    scanf("%d",&n);
    printf("%d\n",a);
    while(n>1)
    {
        a=a+2;
        printf("%d\n",a);
        n=n-1;
    }
    return 0;
}