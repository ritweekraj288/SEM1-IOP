#include<stdio.h>
int main()
{
    int n,m,a,b,k,sum=0;
    printf("enter the value of N and M\n");
    scanf("%d",&n);
    printf(" ");
    scanf("%d",&m);
    printf("\n");
    int jar[n];
    for(int i=0;i<n;i++)
    {
        jar[i]=0;
    }

    for(int i=0;i<m;i++)
    {
        printf("enter the value of a,b and k\n");
        scanf("%d",&a);
        printf(" ");
        scanf("%d",&b);
        printf(" ");
        scanf("%d",&k);
        printf("\n");
        for(int j=a-1;j<=b-1;j++)
        {
            jar[j]+=k;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d\t",jar[i]);
        }
        printf("\n");



    }
    for(int i=0;i<n;i++)
    {
        sum+=jar[i];
    }
    int avg;
    avg=sum/n;
    printf("%d",avg);
    return 0;


}    