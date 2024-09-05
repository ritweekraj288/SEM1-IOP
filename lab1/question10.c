#include<stdio.h>
int main()
{
    float m,p,c,e,cm;
    printf("enter your marks obtained in maths, physics,chemistry and entrance respectively");
    scanf("%f%f%f%f",&m,&p,&c,&e);
    cm=(m/2)+(p/2)+(c/2)+e;
    printf("your cutoff marks is=%f",cm);
    return 0;
}