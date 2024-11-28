#include<stdio.h>
#include<string.h>
int main()
{
    struct employee
    {
        int empno;
        char empname[10];
        int basicpay;
    };

    int n;
    printf("\nenter the number of entries\n ");
    scanf("%d",&n);
    struct employee emp[n];
    for(int i=0;i<n;i++)
    {
        printf("\nenter the details of entry %d\n",i+1);
        printf("\nemployee number");
        scanf("%d",&emp[i].empno);
        printf("\nemployee name");
        scanf("%s",emp[i].empname);
        printf("\nbasic pay");
        scanf("%d",&emp[i].basicpay);
    }
    printf("\n details of various employees\n");
    for(int i=0;i<n;i++)
    {
        printf("employee number %d | employee name %s |employee basic pay %d",emp[i].empno,emp[i].empname,emp[i].basicpay);
        printf("\n");
    }
    return 0;

}