#include<stdio.h>
int main()
{
    float hours,minutes,seconds,totalseconds;
    printf("enter hours,minutes and seconds respectively");
    scanf("%f%f%f",&hours,&minutes,&seconds);
    totalseconds=seconds+(minutes*60)+(hours*60*60);
    printf("total seconds=%f",totalseconds);
    return 0;

}