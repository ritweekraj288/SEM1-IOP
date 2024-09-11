#include<stdio.h>
int main()
{
    int a=1,n;
    printf("enter the number of terms of odd numbers to be displayed\n");
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