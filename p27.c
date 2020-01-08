#include<stdio.h>
#include<string.h>
struct date1
{
    int day,month,year;
}d1,d2;
int check_date(struct date1 d);
int main()
{
    int x,y;
    printf("enter first date in format dd\mm\yy:");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("\n date is %d/%d/%d",d1.day,d1.month,d1.year);
    printf("\n enter second date in formate dd\mm\yy");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
    printf("\n date is %d/%d/%d",d2.day,d2.month,d2.year);
    x=check_date(d1);
    y=check_date(d2);
    if(x==0)
    {
        printf("\n first date is invalid");
    }
    else
    {
        printf("\n first date is valid");
    }
    if(y==0)
    {
        printf("\n second date is invalid");
    }
    else
    {
        printf("\n second date is valid");
    }
    if(d1.day==d2.day||d1.month==d2.month||d1.year==d2.year)
    {
        printf("\n both date are eqaul");
    }
    else
        {
            printf("\n both date are not equal");
        }

    printf("\n it is created by pmh 18ce031 \n ");
    return 0;
}
int check_date(struct date1 d)
{
     if(d.day>=1||d.day<=31&&d.month>=1||d.month<=12&&d.year>=1000||d.year<=9999)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
