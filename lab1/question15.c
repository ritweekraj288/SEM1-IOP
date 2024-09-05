#include<stdio.h>
int main()
{
    float m;
    printf("enter the marks you scored in your exam");
    scanf("%f",&m);
    if ((m>75)&&(m<=100))
    {
        printf("division A");
    }
    if ((m>50)&&(m<=75))
    {
        printf("division B");
    }
    if ((m>25)&&(m<=50))
    {
        printf("division C");
    }
    if ((m>0)&&(m<=25))
    {
        printf("division D");
    }
    return 0;
}
    

