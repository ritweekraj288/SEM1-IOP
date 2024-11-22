#include<stdio.h>
void palindrome(int num)
{
    int r,store,sum=0;
    store=num;
    while(num!=0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num/=10;
    }
    if(sum==store)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome");
    }

}
int main()
{
    int a;
    printf("enter the number to be checked");
    scanf("%d",&a);
    palindrome(a);
    return 0;
    
}