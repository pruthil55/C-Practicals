#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,val,k;
clrscr();
printf("enter value of n");
scanf("%d",&n);
val=1;
for(i=1;i<=n;i++)
{
for(k=1;k<=n-i;k++)
{
printf("   ");
}
for(j=1;j<=i;j++)
{
printf("%3d",val);
val=val+2;
}
printf("\n");
}
printf("it is created by pmh 18ce031");
getch();
}
