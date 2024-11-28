#include<stdio.h>
int main()
{
    int array[3][3],sum=0;
    printf("enter the elements for the array");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
            sum+=array[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
    }
    printf("\nsum of all the elements are %d",sum);
    return 0;
}