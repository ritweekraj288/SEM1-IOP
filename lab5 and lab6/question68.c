#include<stdio.h>
int main()
{
    int array1[3][3],array2[3][3],array3[3][3];
    printf("enter the elements for array 1\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }

    }
    printf("\narray1 elements display\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",array1[i][j]);
        }
        printf("\n");
    }
    printf("\nenter the elements for array2\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array2[i][j]);
        }

    }
    printf("\narray2 elements display\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",array2[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            array3[i][j]=0;
            for(int k=0;k<3;k++)
            {
                array3[i][j]+=array1[i][j]*array2[i][k];
            }
        }
    }
     printf("\narray3 elements display\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",array3[i][j]);
        }
        printf("\n");
    }
   
    
    return 0;
}