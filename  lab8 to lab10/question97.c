#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter the string");
    gets(str);
    char *p=str;
    int i=0,vowel=0;
    while(*(p+i)!='\0')
    {
        char a=*(p+i);
        switch(a)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':vowel++;
        }
        i++;
    

    }
    printf("total vowels are %d",vowel);
    return 0;
}