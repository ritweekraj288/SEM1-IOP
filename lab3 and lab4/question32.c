#include<stdio.h>
int main()
{
    int terms,num1,num2,a,b,c;
    printf("enter the number of numbers to be entered");
    scanf("%d",&terms);
    printf("enter the first number");
    scanf("%d",&num1);
    

    while(terms>=2)
    {
        printf("enter the another number");
        scanf("%d",&b);
        if(b>num1)
        {
            num2=num1;
            num1=b;
        }
        if(b<num1&&b>num2)
        {
            num2=b;
        }
        terms-=1;
        
        

    }
    printf("maximum number is %d",num1);
    printf("second maximum number is %d",num2);
    return 0;
}
    