#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("enter the number of strings");
    scanf("%d",&n);
    char arr[n][20];
    printf("enter the strings");
    for(int i=0;i<n;i++)
    {
        gets(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        puts(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j])>0)
            {
                char temp[20];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        puts(arr[i]);
    }
    return 0;
}