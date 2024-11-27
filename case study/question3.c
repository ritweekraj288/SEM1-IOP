#include<stdio.h>
int main()
{
    int t;
    printf("enter the number of testcases\n");
    scanf("%d",&t);
    int num[t];
    printf("enter the numbers\n");
    for (int i=0;i<t;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("elements are\n");
    for(int i=0;i<t;i++)
    {
        printf("%d\t",num[i]);
    }
    for(int i=0;i<t;i++)
    {
        int a,b,c,d=0;
        a=num[i];
        b=a;
        while(a>0)
        {
            c=a%10;
            a=a/10;
            if(b/c)
            {
                d+=1;
            }
        }
        printf("\nnumber %d is divisible by %d digits",num[i],d);


    }
    return 0;


    
}