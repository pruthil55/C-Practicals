#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char c;
clrscr();
c=getchar();
putchar(c);
if(isalnum(c))
{
printf(" \n your character is alphanumerical");
}
if(isalpha(c))
{
printf("\n your charater is alpha");
}
if(isdigit(c))
{
printf("\n your character is digit");
}
if(islower(c))
{
printf("\n your character is  lower case charater");
}
if(isprint(c))
{
printf("\n your input is printebale");
}
if(ispunct(c))
{
printf("\n your input is punctuation mark");
}
if(isspace(c))
{
printf("\n your input is space");
}
if(isupper(c))
{
printf("\n %c",tolower(c));
}
if(islower(c))
{
printf("\n %c",toupper(c));
}
printf("\n this is created by pmh 18tce106");
getch();
}