#include<stdio.h>
#include<stdlib.h>
int main()
{
    int lucknum,randnum;
    printf("welcome to the guessing game\nenter your lucky number\n");
    scanf("%d",&lucknum);
    for(int a=1;a<2;a++)
    {
        randnum=rand();
        if(lucknum==randnum)
        {
            printf("congratulations!\nyou won");
        }
        else
        {
            printf("try next time\nthe number to win was %d",randnum);
        }
    }
    return 0;

}