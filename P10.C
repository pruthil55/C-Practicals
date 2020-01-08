#include<stdio.h>
#include<conio.h>
void main()
{
int sub_fail,cls;
clrscr();
printf("enter your class=");
scanf("%d",&cls);
printf("\n number of subject in which you are fail=");
scanf("%d",&sub_fail);
switch(cls)
{
case 1:
if(sub_fail>3)
{
printf("no grace");
}
else
{
printf("grace is of 5 marks per subject");
}
break;
case 2:
if(sub_fail>2)
{
printf("no grace");
}
else
{
printf("grace is of 4 marks per subject");
}
break;
case 3:
if(sub_fail>1)
{
printf("no grace");
}
else
{
printf("grace is of 5 marks per subject");
}
}
printf("\n this is created bu pmh 18tce106");
getch();
}