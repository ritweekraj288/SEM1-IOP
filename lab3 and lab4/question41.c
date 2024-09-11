#include<stdio.h>
int main()
{
    int num,a=1;
    printf("enter the number\n");
    scanf("%d",&num);
     printf("factors are\n");
    while(a<=num)
    {
        if(num%a==0)
        {
            printf("%d\n",a);

        }
        a+=1;
    }
    return 0;
    
}