#include<stdio.h>
int main()
{
    int array1[10],array2[10],extra;
    for(int i=0;i<10;i++)
    {
        printf("enter the numbers for array1\n");
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("enter the numbers for array2\n");
        scanf("%d",&array2[i]);
    }
    printf("\n");
    printf("elements of array1\t");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\n");
    printf("elements of array2\t");
     for(int i=0;i<10;i++)
    {
        printf("%d\t",array2[i]);
    }
    for(int i=0;i<10;i++)
    {
        extra=array1[i];
        array1[i]=array2[i];
        array2[i]=extra;
    }
    printf("\n");
    printf("after operation");
    printf("\n");
    printf("elements of array1\t");
     for(int i=0;i<10;i++)
    {
        printf("%d\t",array1[i]);
    }
    printf("\n");
    printf("elements of array2\t");
     for(int i=0;i<10;i++)
    {
        printf("%d\t",array2[i]);
    }
    return 0;
}