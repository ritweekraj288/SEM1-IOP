#include<stdio.h>
int main()
{
    int a,b;
    for(a=65;a<=69;a++)
    {
        for(b=65;b<=a;b++)
        {
            printf("%c",(char)b);
        }
        printf("\n");
    }
    return 0;
}