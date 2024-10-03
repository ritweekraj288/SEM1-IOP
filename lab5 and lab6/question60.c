#include<stdio.h>
int main()
{
    int i,n,min,index,extra;
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
    for(i=0;i<n;i++)
    {
        min=array[i];
        for(int j=i;j<n;j++)
        {
            if(array[j]<min)
            {
                min=array[j];
                index=j;
            }
        }
        
        
        extra=array[i];
        array[i]=min;
        array[index]=extra;
        
    }
    printf("\nselection sorted array\n");
    for( i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;

}

