#include<stdio.h>
int main()
{
    int rows=4;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
            if(k==i)
            {
                int a=k-1;
                while(a!=0)
                {
                    printf("%d",a);
                    a-=1;
                }
                
            }
        
        }
        printf("\n");
    }
    return 0;
}