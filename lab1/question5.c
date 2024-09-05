#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter a and b");
    scanf("%f%f",&a,&b);
    printf("value of variables a and b respectively are%fand%f",a,b);
    c=a;
    a=b;
    b=c;
    printf("value of variables a and b respectively are%fand%f",a,b);
    return 0;
}