#include<stdio.h>
void ncr(float n,float r)
{
    float num,den;
    float fac(float a);
    float ncr;
    num=fac(n);
    den=fac(r)*fac(n-r);
    ncr=num/den;
    printf("value of ncr is %f",ncr);
}
float fac(float a)
{
    float pro=1;
    while(a>0)
    {
        pro*=a;
        a-=1;
    }
    return pro;
}
int main()
{
    float n,r;
    printf("to calculate ncr enter the value of n and r");
    scanf("%f%f",&n,&r);
    ncr(n,r);
    return 0;
}