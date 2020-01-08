#include<stdio.h>
#include<conio.h>

struct emp
{
     char name[20];
     char des[20];
     char dname[25];
     long int bas;
     struct slr
     {
     int da,hra,ca;
     }s;
}e;
void main()
{
long int total;
clrscr();
printf("enter the name of employee");
gets(e.name);
printf("\n enter the designation ");
gets(e.des);
printf("\n enter department name");
gets(e.dname);
printf("\n enter the basic pay");
scanf("%ld",&e.bas);
fflush(stdin);
printf("\n enter the dearness allowence");
scanf("%d",&e.s.da);
fflush(stdin);
printf("\n enter the houserent allowence");
scanf("%d",e.s.hra);
fflush(stdin);
printf("\n enter the city allowence");
scanf("%d",&e.s.ca);
fflush(stdin);
total=(e.bas)+(e.s.da)+(e.s.hra)+(e.s.ca);
printf("\n the total salary is =%ld",total);
printf("\n it is created by pmh 18ce031")
getch();
}