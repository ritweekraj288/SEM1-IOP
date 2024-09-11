#include<stdio.h>
int main()
{
    float unit,charge;
    printf("enter the units consumed");
    scanf("%f",&unit);
    if(unit>0&&unit<200)
    {
        charge=0.5*unit;
    }
    if(unit>200&&unit<400)
    {
        charge=100+0.65*(unit-200);
    }
    if(unit>400&&unit<600)
    {
        charge=230+0.8*(unit-400);
    }
    if(unit>600)
    {
        charge=425+1.25*(unit-600);
    }
    printf("total charge is %f",charge);
    return 0;
}