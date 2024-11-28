#include<stdio.h>
int main()
{
    int a,b,n;
    for(a=5;a>=1;a--)
    {
        n=1;
        for(b=1;b<=5;b++)
        {
            if(b<a)
            {
                printf(" ");
            }
            else
            {
                printf("%d",n);
                n+=1;
            }
        }
        printf("\n");
    }
    return 0;
}