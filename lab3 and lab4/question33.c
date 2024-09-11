#include<stdio.h>
int main()
{
    int terms,min,max,a,num;
    printf("enter number of numbers to be entered");
    scanf("%d",&terms);
    printf("enter the number");
    scanf("%d",&num);
    max=min=num;
    while(terms>1)
    {
        printf("enter another number");
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
        
        terms-=1;
    }
    printf("max and min numbers are %d and %d respectively",max,min);
    return 0;
}