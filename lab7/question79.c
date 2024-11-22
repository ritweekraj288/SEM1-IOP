#include<stdio.h>
void exchange(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("new values of a and b are %d and %d respectively\n",a,b);
}
int main()
{
    int a,b;
    printf("enter the values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("values of a and b are %d and %d respectively\n",a,b);
    exchange(a,b);
    return 0;
}