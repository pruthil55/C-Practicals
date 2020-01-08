#include<stdio.h>
#include<conio.h>
void main()
{
float s1,s2,s3;
clrscr();
printf(" s1=");
scanf("%f",&s1);
printf("s2=");
scanf("%f",&s2);
printf("s3=");
scanf("%f",&s3);
if(s1>s2 && s1>s3)
{
if(s2+s3>s1)
{
printf("perfect triangle");
}
else
{
printf("not perfect triangle");
}
}
else if(s2>s1 && s2>s3)
{
if(s3+s1>s2)
{
printf("perfect triangle");
}
else
{
printf("not perfect triangle");
}
}
else
{
if(s2+s1>s3)
{
printf(" perfect triangle");
}
else
{
printf("not perfect triangle");
}
}
printf("\n this is created by pruthil 18tce106");
getch();
}

