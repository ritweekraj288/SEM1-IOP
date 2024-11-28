#include<stdio.h>
int main()
{
    int arr_num[10],num,pos=0,neg=0,zer=0;
    for(int i=0;i<10;i++)
    {
        printf("enter the number");
        scanf("%d",&num);
        arr_num[i]=num;
        if(num>0)
        {
            pos+=1;
        }
        if(num<0)
        {
            neg+=1;
        }
        if(num==0)
        {
            zer+=1;
        }
    }
    printf("total count of postive,negative and zeroes entered are %d,%d and %d",pos,neg,zer);
    return 0;


}