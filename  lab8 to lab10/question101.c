#include<stdio.h>
int main()
{
    FILE *ptr=fopen("LNMIITSTUDENT.DAT","a");
    char str[100];
    printf("enter the data to be entered");
    gets(str);
    fputs(str,ptr);
    return 0;

}