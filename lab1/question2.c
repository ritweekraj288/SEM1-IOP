#include<stdio.h>
int main()
{
    float a,b,c,d,e,t,p;
    printf("enter a,b,c,d,e");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    t=a+b+c+d+e;
    printf("total marks=%f",t);
    p=(t/500)*100;
    printf("percentage=%f",p);
    return 0;

}