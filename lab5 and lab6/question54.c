#include<stdio.h>
int main()
{
    int arr_num[10],j,sum=0;
    for(int i=0;i<10;i++)
    {
        printf("enter the number to be added in array");
        scanf("%d",&j);
        arr_num[i]=j;
        sum+=j;
    }
    printf("sum of all the entered numbers is %d",sum);
    return 0;
}