#include<stdio.h>
int main()
{
    int sum=0,num,a=1;
    while(a>0)
    {
        printf("enter the number to be added");
        scanf("%d",&num);
        if(num<0)
        {
            printf("ending the programme as entered number is negative\n");
            break;
        }
        else
        {
            sum+=num;
        }
    }
    printf("required summation is %d",sum);
    return 0;
}