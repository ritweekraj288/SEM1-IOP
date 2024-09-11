#include<stdio.h>
int main()
{
    int num,a=1,b=0;
    printf("enter the number to be checked\n");
    scanf("%d",&num);
    while(a<=num)
    {
        if(num%a==0)
        {
            b+=1;
        }
        a+=1;
    }
    if(b==2)
    {
        printf("prime number");
    }
    else
    {
        printf("composite number");
    }
    return 0;

}