#include<stdio.h>
int main()
{
    int n;
    printf("\nenter the number to be stored\n");
    scanf("%d",&n);
    printf("\nvalue enterd is %d\n",n);
    int *ptr;
    ptr=&n;
    printf("\nenter the new value to modify the previous value\n");
    scanf("%d",ptr);
    printf("the new value is %d",*(ptr));
    return 0;
}