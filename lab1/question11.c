#include<stdio.h>
int main()
{
    int sec,s,m,h,a,b;
    printf("enter the time in second");
    scanf("%d",&sec);
    h=sec/3600;
    a=sec%3600;
    m=a/60;
    b=m%60;
    s=b;
    printf("time is=%dhr%dmin%dsec",h,m,s);
    return 0;
}