#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a[3];
    for(int i=0;i<3;i++)
    {
        a[i]=(int*)malloc(3*sizeof(int));

    }
    printf("enter the matrix elements of a");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(a+i)+j));
        }
    }
    int *b[3];
    for(int i=0;i<3;i++)
    {
        b[i]=(int*)malloc(3*sizeof(int));

    }
    printf("enter the matrix elements of b");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(b+i)+j));
        }
    }
    int *c[3];
    for(int i=0;i<3;i++)
    {
        c[i]=(int*)malloc(3*sizeof(int));

    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(*(c+i)+j)=0;
            for(int k=0;k<3;k++)
            {
                *(*(c+i)+j)=*(*(c+i)+j)+(*(*(a+i)+k))*(*(*(b+k)+j));

            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",*(*(c+i)+j));
        }
        printf("\n");
    }
    return 0;
}