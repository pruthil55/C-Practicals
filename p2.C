#include<stdio.h>
#include<conio.h>
void main()
{
float salary,da,hra,gs;
clrscr();
printf("enter your salary");
scanf("%f",&salary);
da=salary*0.40;
printf("%f",da);
hra=salary*0.20;
printf("%f",hra);
gs=salary+da+hra;
printf("%f",gs);
printf("\nit is created by pmh106");
getch();
 }