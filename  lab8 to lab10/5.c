#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elemnts in array\n");
    scanf("%d",&n);
    int org[n],sto[n];
    int *optr,*sptr;
    optr=&org;
    sptr=&sto;
    printf("\nenter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(optr+i));
    }
    printf("\nelements enterd\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(optr+i));

    }
   
    
    
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        *(sptr+j)=*(optr+i);
        j=j-1;
    }
    printf("\nelements of stored array in reverse order\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(sptr+i));

    }
    return 0;


}