#include<stdio.h>
int main()
{
    int a,f;
    printf("enter the number whose factorial you require");
    scanf("%d",&a);
    for(f=1;a>0;a=a-1)
    {
        f=f*a;
    }
    printf("the factorial of the entered number is%d",f);
}