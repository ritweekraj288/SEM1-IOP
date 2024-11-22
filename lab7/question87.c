#include<stdio.h>
#include<string.h>
int main()
{
    struct students 
    {
        int rollno;
        char name[10];
        int marks;

    };
    int n;

    printf("enter the number of students");
    scanf("%d",&n);
    struct students s[n];
    for(int i=0;i<n;i++)
    {
        printf("\nenter the details of student %d\n",i+1);
        printf("\nroll number\n");
        scanf("%d",&s[i].rollno);
        printf("\nname\n");
        scanf("%s",s[i].name);
        printf("\nmarks\n");
        scanf("%d",&s[i].marks);
    }
    printf("\ndetails of the students with marks more than 500 are\n");
    for(int i=0;i<n;i++)
    {
        if(s[i].marks>500)
        {
            printf("\nroll number %d | name %s | marks %d\n",s[i].rollno,s[i].name,s[i].marks); 
        }
    }
    return 0;
}    