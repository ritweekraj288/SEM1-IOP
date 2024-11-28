#include<stdio.h>
int main()
{
    FILE *ptr=fopen("question99.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL)
    {
        printf("%s",str);
    }
    char ch;
    int i=0,v=0;
    ch=str[i];
    while(ch!=NULL)
    {
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':v++;
                     break;
        }
        ch=str[i++];


    }
    printf("total vowels are %d",v);
    return 0;
   
}