#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter the string");
    gets(str);
    printf("entered string");
    puts(str);
    char *p=str;
    int i=0,space=0;
    while(*(p+i)!='\0')
    {
        if(*(p+i)==' ')
        {
            space++;
        }
        i++;
    }
    printf("total words in the string are %d",space+1);
    return 0;
}