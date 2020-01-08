#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x1,x2,x3,y1,y2,y3,s1,s2,s3;
clrscr();
printf("x1=");
scanf("%f",&x1);
printf("\nx2=");
scanf("%f",&x2);
printf("\nx3=");
scanf("%f",&x3);
printf("\ny1=");
scanf("%f",&y1);
printf("\ny2=");
scanf("%f",&y2);
printf("\ny3=");
scanf("%f",&y3);
s1=fabs(y2-y1)/(x2-x1);
s2=fabs(y3-y2)/(x3-x2);
s3=fabs(y3-y1)/(x3-x1);
if(s1==s2&&s2==s3)
{
printf("line is straight");
}
else
{
printf("line is not straight");
}
printf("\nthis is created by pruthil 18tce106");
getch();
}