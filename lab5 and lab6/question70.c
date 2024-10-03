#include<stdio.h>
int main()
{
    int array[10],element,occur;
    for(int i=0;i<10;i++)
    {
        printf("enter the element\n");
        scanf("%d",&array[i]);
    }
    printf("enter the element whose occurence number you want to know\n");
    scanf("%d",&element);
    occur=0;
    for(int i=0;i<10;i++)
    {
        if(array[i]==element)
        {
            occur+=1;
        }
    }
    printf("number of occurence of the entered element is %d",occur);
    return 0;
}