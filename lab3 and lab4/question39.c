#include<stdio.h>
int main()
{
    float terms,n=1,pro=1,sum=0,a;
    printf("enter the number of terms to be added in the series");
    scanf("%f",&terms);
    while(terms>0)
    {
        a=n;
        while(a>=1)
        {
            pro*=a;
            a-=1;
        }
        sum+=n/pro;
        n+=1;
        terms-=1;
    }
    printf("sum of the terms of the required series is%f",sum);
    return 0;

}
