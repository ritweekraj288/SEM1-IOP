#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter the three numbers to be compared");
    scanf("%f%f%f",&a,&b,&c);
    if ((a>b)&&(a>c))
    {
        printf("first number is largest");
    }
    if ((b>c)&&(b>a))
    {
        printf("second number is largest");
    }
    if ((c>a)&&(c>b))
    {
        printf("third number is largest");
    }
    return 0;

}