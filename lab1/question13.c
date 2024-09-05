#include<stdio.h>
int main()
{
    int a;
    printf("enter an integral number");
    scanf("%d",&a);
    if ((a%2)==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    return 0;
}