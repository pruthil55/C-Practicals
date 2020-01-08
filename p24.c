#include<stdio.h>
#include<string.h>
struct library
{
    int acc;
    char title[100];
    char auther[100];
    float price;
    int flag;
};
int main()
{
    struct library l1;
    printf("enter your acc no.=");
    scanf("%d",&l1.acc);
    fflush(stdin);
    printf("\n%d",l1.acc);
    printf("\nenter title=");
    gets(l1.title);
    fflush(stdin);
    puts(l1.title);
    printf("\nenter auther name=");
    gets(l1.auther);
    fflush(stdin);
    puts(l1.auther);
    printf("\nenter the price");
    scanf("%f",&l1.price);
    fflush(stdin);
    printf("%f",l1.price);
    printf("\nenter the value of flag 0 or 1");
    scanf("%d",&l1.flag);
    printf("\n%d",l1.flag);
    if(l1.flag==0)
    {
        printf("\n book is not issued");
    }
    else
    {
        printf("\n book is issued");
    }
    printf("\n it is created by pmh 18ce031");
    return 0;
}
