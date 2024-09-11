#include<stdio.h>
int main()
{
    int a=1,s,n;
    printf("enter the number of terms of square series you wish to display\n");
    scanf("%d",&n);
    while(n>0)
    {
        s=a*a;
        printf("%d\n",s);
        a=a+1;
        n=n-1;
    }
    return 0;
}