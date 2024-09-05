#include<stdio.h>
int main()
{
    char a;
    int c,d,sum,diff,pro,div;
    printf("enter the operation sign +,-,*,/ that you need to perform");
    scanf("%c",&a);
    switch(a)
    {
        case '+':
        
        printf("enter the two numbers whose sum you need to calculate");
        scanf("%d%d",&c,&d);
        sum=c+d;
        printf("the sum of the two numbers is%d",sum);
        break;
        case '-':
        
        printf("enter the two numbers whose difference you need to calculate");
        scanf("%d%d",&c,&d);
        diff=c-d;
        printf("the difference of the two numbers is%d",diff);
        break;
        case '*':
        printf("enter the two numbers whose product you need to calculate");
        scanf("%d%d",&c,&d);
        pro=c*d;
        printf("the product of the two numbers is%d",pro);
        break;
        case '/':
        
        printf("enter the two numbers whose division you need to calculate");
        scanf("%d%d",&c,&d);
        div=c/d;
        printf("the division of the two numbers is%d",div);
        break;
    }

}