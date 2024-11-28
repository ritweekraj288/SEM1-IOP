#include<stdio.h>
#include<string.h>
int main()
{

    char str[20];
    int l1=0,l2=0;
    char* p=str;
    printf("enter the string");
    gets(str);
    printf("\nstring entered\n");
    puts(str);
    
   
    int i=0;
    while(*(p+i)!='\0')
    {
        if(*(p+i)==' ')
        {
            printf("%c",*(p+i));
            l1++;
            
        }
        else
        {
            printf("%c",*(p+i));
            l1++;
            l2++;

        }
        i++;

        
    }
    
   
    printf("\nlenght with space %d\n",l1);
    printf("\nlenght without space %d\n",l2);
    return 0;


}