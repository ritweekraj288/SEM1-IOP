#include<stdio.h>
int main()
{
    int array[3][3];
    printf("enter the elements in array\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    int max,min;
    max=array[0][0];
    min=array[0][0];
    printf("\narray\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",array[i][j]);
            if(array[i][j]>max)
            {
                max=array[i][j];
            }
            if(array[i][j]<min)
            {
                min=array[i][j];
            }

        }
    }
    printf("\n");
    printf("maximum and minimum values are %d and %d\n",max,min);
    return 0;
}