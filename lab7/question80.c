#include<stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,c;
    printf("%d\n%d\n",a,b);
    while(n>2)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
        n-=1;
    }
}
int main()
{
    int num;
    printf("enter the number till which you want to print fibonacci series");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}