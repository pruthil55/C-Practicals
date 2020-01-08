#include<stdio.h>
#include<conio.h>
void main()
{
int amount,price,quantity;
float discount,bill;
clrscr();
printf("enter quantity=");
scanf("%d",&quantity);
printf("\n your price=");
scanf("%d",&price);
amount=quantity*price;
if(quantity>1000)
{
discount=amount*0.1;
bill=amount-discount;
printf("\n your bill is %f",bill);
}
if(quantity<1000)
{
bill=amount;
printf("\n your bill is %f",bill);
}
getch();
}






































