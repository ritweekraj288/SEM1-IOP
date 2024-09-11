#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    printf("enter the number of terms of fibonacci series that you would like to see");
    scanf("%d",&c);
    printf("fibonacci series\n");
    printf("%d\n%d\n",a,b);
    while(c>2)
    {
        n=a+b;
        printf("%d\n",n);
        a=b;
        b=n;
        c=c-1;
    }
    return 0;
}


