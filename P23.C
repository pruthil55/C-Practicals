#include<stdio.h>
#include<conio.h>

void readarr(int b[4][4],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("enter the element number b[%d][%d]=",i,j);
		scanf("%d",&b[i][j]);
		 }
	 }
}
void main()
{
	int a[4][4],i=4,j=4,flag=0,temp=0;
	clrscr();
	readarr(a,i,j);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		if(i<=j)
		{
			if(a[i][j]!=0)
			{
			flag=1;
			}
			else
			{
			flag=0;
			}
		}
		if(i>j)
		{
			if(a[i][j]==0)
			{
			temp=1;
			}
			else
			{
			temp=0;
			}
		}
		}
		 }
		if(flag && temp)
		{
		printf("enter matrix is upperdiagonal");
		}
		else
		{
		printf("enter matrix is not upperdiagonal");
		}
		printf("\n it is created by pmh 18ce031");

	getch();

}