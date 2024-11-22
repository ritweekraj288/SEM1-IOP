#include<stdio.h>
void char_check(char c)
{
    switch(c)
    {
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':printf("not vowel");
                 break;

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':printf("vowel");
                 break;
    }
}
int main()
{
    char c;
    printf("enter the character to be checked\n");
    scanf("%c",&c);
    char_check(c);
    return 0;
}