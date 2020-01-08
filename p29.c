#include<stdio.h>
int main()
{
    int a[10],i,dis=0,fc=0,pass=0,fail=0;
    for(i=0;i<10;i++)
    {
        printf("enter the marks of ce141 of student no %d is=",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
    if(a[i]>=70||a[i]<=100)
    {
        dis++;
    }
    else if(a[i]>=60||a[i]<=69)
    {
        fc++;
    }
    else if(a[i]>=40||a[i]<=59)
    {
        pass++;
    }
    else
    {
        fail++;
    }
    }
    printf("\n distinction=%d",dis);
    printf("\n first class=%d",fc);
    printf("\n pass=%d",pass);
    printf("\n fail=%d",fail);
    printf("\n it is created by pmh 18ce031 \n");
 return 0;
}
