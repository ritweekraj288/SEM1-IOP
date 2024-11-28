#include<stdio.h>
int main()
{
    int arr_num[10],odd=0,even=0;
    for(int i=0;i<10;i++)
    {
        printf("enter the number");
        scanf("%d",&arr_num[i]);
        if(arr_num[i]%2!=0)
        {
            odd+=1;
        }
        else
        {
            even+=1;
        }
    }
    printf("total count of odd and even numbers are %d and %d respectively",odd,even);
    return 0;
    
}