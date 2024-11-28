#include<stdio.h>
int main()
{
    int array1[10],array2[10];
    for(int i=0;i<10;i++)
    {
        printf("enter the element\n");
        scanf("%d",&array1[i]);
    }
    printf("array\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",array1[i]);
    }
    for(int i=0;i<10;i++)
    {
        array2[i]=array1[9-i];
    }
    for(int i=0;i<10;i++)
    {
        array1[i]=array2[i];
    }
    printf("\nrevered array\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",array1[i]);
    }
    return 0;

}