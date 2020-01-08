#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int sum,n,i;
clrscr();
sum=0;
i=1;
printf("enter the number n=");
scanf("%d",&n);
pruthil:
if(i<=n)
{
sum=sum+(i*i);
i++;
goto pruthil;
}
printf("your answer is=%d",sum);
printf("\n this is cerated by pmh 18tce106");
getch();
}