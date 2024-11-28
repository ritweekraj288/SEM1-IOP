#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,c;
    printf("enter the number");
    scanf("%d",&n);
    int *p=&n;
    s=pow(*p,2);
    c=pow(*p,3);
    printf("square and cube are %d and %d repesctively",s,c);
    return 0;
    
}