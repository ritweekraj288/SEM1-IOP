#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t;
    printf("enter the number of testcases\n");
    scanf("%d",&t);
    char w[t][100];
    printf("enter the words\n");
    for(int i=0;i<t+1;i++)
    {
        gets(w[i]);
        fflush(stdin);
    }
    
    for(int i=0;i<t+1;i++)
    {
        int flag=0;
        for(int j=strlen(w[i])-1;j>=0;j--)
        {
            int a,b;
            a=w[i][j];
            b=w[i][j-1];
            if(a>b)
            {
                char temp;
                temp=w[i][j];
                w[i][j]=w[i][j-1];
                w[i][j-1]=temp;
                printf("%s\n",w[i]);
                flag=1;
                
                
            }
            if(flag==0)
            {
                printf("no answer");
            }
            else
            {
                break;
            }
            

            


        }
        
        

    }
    return 0;



}