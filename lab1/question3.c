#include<stdio.h>
int main()
{
    float basicsalary,hra,otherallowances,total;
    printf("enter basicsalary,hra,otherallowances");
    scanf("%f%f%f",&basicsalary,&hra,&otherallowances);
    total=basicsalary+hra+otherallowances;
    printf("total salary is=%f",total);
    return 0;
}