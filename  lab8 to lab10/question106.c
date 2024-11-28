#include<stdio.h>
#include<string.h>


struct item
{
    char itname[15];
    int qty;
    int price;
    int amt;
};
struct item list[10];


void amount(char name[15],int quantity,int price,int num)
{
    int amount;
    list[num].amt=quantity*price;
    printf("\namount of the item with name %s is %d\n",name,list[num].amt);  
}




int main()
{
    int n;
    printf("enter the number of items");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the item name");
        scanf("%s",list[i].itname);
        printf("enter the quantity");
        scanf("%d",&list[i].qty);
        printf("enter the price");
        scanf("%d",&list[i].price);

    }
    for(int i=0;i<n;i++)
    {
        amount(list[i].itname,list[i].qty,list[i].price,i);
    }
    return 0;


}