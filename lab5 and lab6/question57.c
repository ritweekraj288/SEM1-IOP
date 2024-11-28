#include<stdio.h>
int main()
{
    int entry,num,max,secmax;
    printf("enter the number of entry you want\n");
    scanf("%d",&entry);
    printf("enter the first number\n");
    scanf("%d",&max);
    while(entry>1)
    {
        printf("enter another number");
        scanf("%d",&num);
        if(num>max)
        {
            secmax=max;
            max=num;
        }
        if(num<max&&num>secmax)
        {
            secmax=num;
        }
        entry-=1;
    }
    printf("the maximum and second the maximum numbers from the various entries are %d and %d ",max,secmax);
    return 0;

}