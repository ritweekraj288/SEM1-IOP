#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    int array[n];
    printf("\nenter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n entered array \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(array[j]>array[j+1])
            {
                int extra;
                extra=array[j];
                array[j]=array[j+1];
                array[j+1]=extra;
            }
        }
    }
    printf("\nbubble sorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}