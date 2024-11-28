#include<stdio.h>
int main()
{
    int array[3][3],transpose[3][3];
    printf("enter the elements\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    } 
    printf("\narray\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            transpose[i][j]=array[j][i];
        }
    }
    printf("\ntranspose of the entered matix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
