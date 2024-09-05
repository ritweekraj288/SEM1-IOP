#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers to be compared");
    scanf("%d%d%d",&a,&b,&c);
    (a>b&&a>c)?printf("%d is the maximum value among the three\n",a):printf("%d is not the maximum value among the three\n",a);
    (b>a&&b>c)?printf("%d is the maximum value among the three\n",b):printf("%d is not the maximum value among the three\n",b);
    (c>a&&c>b)?printf("%d is the maximum value among the three\n",c):printf("%d is not the maximum value among the three\n",c);
    
    return 0;
    
}
