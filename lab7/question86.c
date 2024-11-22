#include<stdio.h>
#include<string.h>
int main()
{
    char string1[50];
    char c;
    int i=0;
    int count=-1;
    printf("enter the string\n");
    do
    {
        c=getchar();
        string1[i]=c;
        i++;
        count+=1;
    } while (c!='\n');
    i = i-1;//null character is creating a problem may be not inserted at the end so we have specified specifically so that strlen functions properly
    string1[i]='\0';
    printf("\n%s\n",string1);
    printf("lenght of the string by counting the elements is %d",count);
    /*fflush(stdin);*/
    printf("\nlength of the string is %d",strlen(string1));
}