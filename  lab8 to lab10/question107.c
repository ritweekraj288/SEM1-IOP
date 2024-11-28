#include<stdio.h>
#include<math.h>
int flip(int num,int n)
{
    int i=0,r,a=0,result;
    for(int i=0;i<n;i++)
    {
        r=num%10;
        num=num/10;
        a=(a*10)+r; 

    }
    
    

    result=a+(num*pow(10,n));
    return result;

}
int main()
{
    int num,n;
    printf("\nenter the number\n");
    scanf("%d",&num);

    printf("\nenter the number of last digits to flipped\n");
    scanf("%d",&n);

    int r;

    r=flip(num,n);
    printf("\nrequired answer is %d\n",r);
    return 0;


}