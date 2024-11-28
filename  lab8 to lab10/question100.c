#include<stdio.h>
int main()
{
    FILE *ptr=fopen("LNMIITSTUDENT.JAVA","w");
    struct student
    {
        int roll;
        char name[20];
        int marks;
    };
    printf("enter the number of students");
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the roll number");
        scanf("%d",&s[i].roll);
        printf("enter the name");
        scanf("%s",s[i].name);
        printf("enter the marks");
        scanf("%d",&s[i].marks);
        fprintf(ptr,"%d    %s    %d\n",s[i].roll,s[i].name,s[i].marks);
    }

    
    
    return 0;


}