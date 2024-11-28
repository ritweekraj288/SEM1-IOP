#include<stdio.h>
#include<string.h>
void copy()
{
    printf("copy one string to other\n");
    char a[50],b[50];
    printf("enter the first string\n");
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {
        
        b[i]=a[i];
        i++;
    }
    
    printf("\nafter storing the value of first string in second string value of second string is \n %s",b);

}


void compare()
{
    printf("\ncompare two string\n");
    char a[50],b[50];
    printf("\nenter first string\n");
    gets(a);
    printf("\nenter second string\n");
    gets(b);
    int la,lb;
    la=strlen(a);
    lb=strlen(b);
    int l;
    l=la>lb?lb:la;
    int flag=0;

    for(int i=0;i<l;i++)
    {
        if(a[i]==b[i])
        {
            continue;
        }
        if(a[i]>b[i])
        {
            printf("\n%s is greater\n",a);
            break;
        }
        else
        {
            printf("\n%s is greater\n",b);
            break;

        }


    }

}

void concat()
{
    printf("\nconcat two string\n");
   char a[50],b[50],c[50];
   printf("\nenter first string\n");
   gets(a);
   printf("\nenter second string\n");
   gets(b);
   int i=0;
   
   
   while((a[i])!='\0')
   {
    c[i]=a[i];
    i++;
   }
   int j=0;
   while((b[j])!='\0')
   {
    c[i]=b[j];
    i++;
    j++;
   }
   c[i]='\0';
   
   printf("\nafter concatenation the new string becomes %s\n",c);

}

void reverse()
{
    printf("\nreverse a given string\n");
   char a[50],b[50];
   printf("\nenter the string\n");
   gets(a);
   int l=strlen(a);
   int j=0;
   for(int i=l-1;i>=0;i--)
   {
    b[j]=a[i];
    j++;

   }
   b[j]='\0';
   printf("\nreverse of the string is %s\n",b);


}



int main()
{
    copy();
    compare();
    concat();
    reverse();
    return 0;
}