#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("enter value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
printf("it is created by pmh 18ce031");
getch();
}
