#include<stdio.h>
int main()
{
    int d,h,m,a,b,period=31558150;
    d=(period)/86400;
    a=(period)%86400;
    h=a/3600;
    b=a%3600;
    m=b%60;
    printf("number of days,hours and minutes are respectively%d,%dand%d",d,h,m);
    return 0;
    

}