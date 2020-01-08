#include<stdio.h>
void swap(int*,int*);
void max(int*,int*);
int main()
{
    int a=10,b=20,*p1,*p2;
    p1=&a;
    p2=&b;


    printf("addition:%d",*p1+*p2);
    printf("\n substraction:%d", *p1-*p2);
    printf("\n increment:%d",++*p1);
    printf("\n before swap a=%d & b=%d",a,b);
    swap(&a,&b);
    printf("\n after swap a=%d & b=%d",a,b);
    max(&a,&b);
    printf("\n it is created by pmh 18ce031 \n ");
return 0;
}
void swap(int *q,int *r)
{
    int t;
    t=*q;
    *q=*r;
    *r=t;
}
void max(int *q,int *r)
{
    if(*q>*r)
    {
      printf("\n a is max");
    }
    else
    {
        printf("\n b is max");
    }
}
