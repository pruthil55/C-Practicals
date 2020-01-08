#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,tamp=0;
i=2;
clrscr();
scanf("%d",&n);
printf("your number is = %d",n);
for(i=2;i<=n-1;i++)
{
if(n%i==0)
{
tamp++;
}
}
if(tamp>0)
{
printf("\n your number is not prime");
}
else
{
printf("\n your number is  prime");
}
printf("\n it is created by pmh 18ce031");
getch();
}

