#include<stdio.h>
int main()
{
    float sales,comm;
    printf("enter the sales amount");
    scanf("%f",&sales);
    if(sales<=500)
    {
        comm=0.05*sales;
    }
    if(sales>500&&sales<=2000)
    {
        comm=35+0.1*sales;
    }
    if(sales>2000&&sales<=5000)
    {
        comm=185+0.12*sales;
    }
    if(sales>5000)
    {
        comm=0.125*sales;
    }
    printf("commission is %f",comm);
    return 0;
}