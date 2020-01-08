#include<stdio.h>
#include<conio.h>
void main()
{
int choice,fact=1,sum=0,temp=0,i,no;
char ch;
clrscr();
do
{
printf(" 1.prime \n 2.perfect \n 3.factorial \n 4.exit");
printf("\n enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
       printf("\n enter your number no=");
       scanf("%d",&no);
       for(i=2;i<=no-1;i++)
       {
       if(no%i==0)
       {
       temp++;
       }
       }
       if(temp>0)
       {
       printf("your number is not prime");
       }
       else
       {
       printf("your number if prime");
       }
       break;
case 2:
       printf("enter your number");
       scanf("%d",&no);
       for(i=1;i<=no-1;i++)
       {
       if(no%i==0)
       {
       sum=sum+i;
       }
       }
       if(sum==no)
       {
       printf("your number is perfect");
       }
       else
       {
       printf("your number is not perfect");
       }
       break;
case 3:
       printf("enter your number");
       scanf("%d",&no);
       for(i=1;i<=no;i++)
       {
       fact=fact*i;
       }
       printf("%d",fact);
       break;
case 4:
       exit(1);
       break;
default:
       printf("if you wish to continue press y and for not continue press n");
       fflush(stdin);
       scanf("%c",&ch);
       break;
}
}while(ch=='y');
printf("\n this is created by pmh 18ce031");
getch();
}