#include<stdio.h>
#include<conio.h>
void main()
{
int no,i,j,n,t1=1,t2=1,k;
clrscr();
printf("enter value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=1;k<=n-i;k++)
{
printf("   ");
}
for(j=1;j<=i;j++)
{
printf("%6d",t1);
no=t1+t2;
t1=t2;
t2=no;
}
printf("\n");
}
printf("it is created by pmh 18ce031");
getch();
}
