#include<stdio.h>
int prime(int num)
{
    int count=0,n;
    n=num;
    while(n>0)
    {
        if(num%n==0)
        {
            count+=1;
        }
        n-=1;
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int value,num;
    printf("enter a number\nif it will be prime number returned value will be 1 else 0\n");
    scanf("%d",&num);
    value=prime(num);
    printf("returned value is %d",value);
    return 0;
}