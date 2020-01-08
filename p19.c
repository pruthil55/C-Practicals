#include<stdio.h>
#include<conio.h>
int square(int i);
int cube(int i);
void printline();
void printnum();
int main()
{


    printline();
    int j;
    printf(":Number  : Square : cube :\n");
    printline();
    for(j=0;j<=10;j++)
    {
        printnum(j);
    }
     printline();
    printf("\n it was created by pmh 18ce031 \n ");

    return 0;

}
int square(int i)
{
    int a;
    a=i*i;
    return(a);
}
int cube(int i)
{
    int m;
    m=i*i*i;
    return(m);
}
void printline()
{
    printf("---------------------------\n");
}
void printnum(int j)
{
    int c=cube(j);
    int b=square(j);
    printf(": %6d : %6d : %6d :",j,b,c);
    printf("\n");

}
