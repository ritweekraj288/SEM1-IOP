#include<stdio.h>
int main()
{
    int array[10],search,index;
    for(int i=0;i<10;i++)
    {
        printf("enter the element\n");
        scanf("%d",&array[i]);
    }
    printf("array is displayed below\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
    printf("enter the element to be searched");
    scanf("%d",&search);
    for(int i=0;i<10;i++)
    {
        if(array[i]==search)
        {
            index=i;
            break;
        }
    }
    printf("element is present and at the index %d",index);
    return 0;
}