#include<stdio.h>
void read_array_max()
{
    int n;
    printf("enter the number of terms you want in array\n");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element\n");
        scanf("%d",&array[i]);
    }
    printf("array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    int max;
    max=array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("\nmaximum element of the array is %d",max);
}
int main()
{
    read_array_max();
    return 0;

}
