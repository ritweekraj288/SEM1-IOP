#include<stdio.h>
int main()
{
    float height,base,area;
    printf("eneter height and base of the triangle");
    scanf("%f%f",&height,&base);
    area=(0.5)*(base*height);
    printf("area of the triangle=%f",area);
    return 0;
}