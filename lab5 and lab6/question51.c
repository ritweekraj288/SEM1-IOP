#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            if(b==a)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",0);
            }
        }
        printf("\n");
    }
    return 0;

}