#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr=fopen("question102.txt","r");
    int c=1,w=0,l=0;
    char str[100];
    
    /*while(fgets(str,20,ptr)!=NULL)
    {
        printf("%s",str);
    }*/
    char ch;
    int i=0;
    ch=fgetc(ptr);
    //int len=strlen(str);
    while((ch=fgetc(ptr))!=EOF)
    {
        if(ch==' '||ch=='.')
        {
            w++;
        }
        if(ch=='.')
        {
            l++;
        }
        switch(ch)
        {
            case 'a':
            case 'b':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'h':
            case 'i':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'u':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':c++;
                     break;
        } 
       

    
    }
    printf("number of characters,words and lines are %d,%d and %d respectively",c,w,l);
    return 0;

}