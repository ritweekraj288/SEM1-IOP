#include<stdio.h>
int main()
{
    int e=0,o=0,n,a;
    printf("enter the value n up till which you want to calculate even and odd sum\n");
    scanf("%d",&n);
    for(a=1;a<(n+1);a++)
    {
        if(a%2==0)
        {
            e=e+a;
        }
        else
        {
            o=o+a;
        }
    }
    printf("the odd and even sum are respectively %d and %d",o,e);
    return 0;
}
