#include<stdio.h>
void evenodd(int num)
{
    if(num%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}
int main()
{
    int num;
    printf("enter the number to be checked");
    scanf("%d",&num);
    evenodd(num);
    return 0;
}

