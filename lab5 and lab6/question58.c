#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    for(int i=0;i<10;i++)
    {
        printf("enter the elements of index of %d for both the array first and second simultaneously and respectively\n",i);
        scanf("%d%d",&a[i],&b[i]);
        c[i]=a[i]+b[i];
    }
    printf("elements of first array are\t");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    printf("elements of second array are\t");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n"); 
    printf("elements of third array are\t");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}