#include<stdio.h>
#include<conio.h>
void main()
{
char health,city,gender;
float amount,premium,age;
clrscr();
printf("if your health is excellent then print 'e' \n if your health is poor then print 'p'");
printf("\n your health is=");
scanf("%c",&health);
fflush(stdin);
printf("\n enter your age=");
scanf("%f",&age);
fflush(stdin);
printf("\n if you are leave in city then press 'y'\n if you are not city then press 'n' ");
printf("\n are you leave in city=");
scanf("%c",&city);
fflush(stdin);
printf("\n if you are male then enter 'm' \n if you are female then enter 'f'");
printf("\nenter your gender=");
scanf("%c",&gender);
fflush(stdin);
printf("enter your amount=");
scanf("%f",amount);
fflush(stdin);
if(health=='e'&&age>25&&age<35&&city=='y'&&gender=='m'&&amount<200000)
{
premium=(amount*4)/1000;
printf("your premium is %f=",premium);
}
else if(health=='e'&&age>25&&age<35&&city=='y'&&gender=='f'&&amount<100000)
{
premium=(amount*3)/1000;
printf("your premium is %f=",premium);
}
else
{
printf("you can not get premium");
}
getch();
}





