#include<stdio.h>
#include<string.h>
int main()
{
    char org[50];
    printf("enter the string\n");
    gets(org);
    printf("\nentered string\n");
    puts(org);
    int len=strlen(org);
    //printf("%d",len);
    char str[len];
    char *p=org;
    for(int i=0;i<len;i++)
    {
        str[i]=*(p+len-1-i);
    }
    puts(str);
}