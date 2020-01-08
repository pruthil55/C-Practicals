#include<stdio.h>
#include<conio.h>
struct engin
{
   char srno[20];
   int yom;
   char matirial[20];
   int que;
}e[60],*p;
void main()
{
int i;
clrscr();
p=e;
for(i=0;i<4;i++)
{
	printf("\n\t enter the serial number of e[%d]:",i);
	scanf("%s",p->srno);
	printf("\n\t enter the year of manufacturing for e[%d]: ",i);
	scanf("%d",&p->yom);
	printf("\n\t enter the name of matirial for e[%d]:",i);
	scanf("%s",p->matirial);
	printf("\n\t enter the quentity of matirial for e[%d]:",i);
	scanf("%d",&p->que);
	p++;
}
printf("\n ****************** engin details **********************");
	for(p=e+2;p<=e+3;p++)
	 {
		printf("\n serial number:%s",p->srno);
		printf("\n yom is: %d",p->yom);
		printf("\n matirial name is: %s",p->matirial);
		printf("\n quentity is: %d",p->que);
		printf("\n *************************************");
	}
printf("\n\n it is created by pmh 18ce031");
getch();
}


