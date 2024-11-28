#include<stdio.h>
int main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=1;j<6;j++)
        {
            printf(" ");
            if(j>=i)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}