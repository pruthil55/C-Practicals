#include<stdio.h>
int n;
float avg(int c[]);
int main()
{
    int a[50],i,b[50],sigma;
    float mean,meansquare;
    printf("enter the number of element n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter your element=");
        scanf("%d",&a[i]);
    }
    mean=avg(a);
    printf("\n mean=%f",mean);
    for(i=0;i<n;i++)
    {
        b[i]=(a[i]-mean)*(a[i]-mean);
    }
    printf("\n b[%d] =%d",i,b[i]);
    meansquare=avg(b);
    printf("\n meansquare=%f",meansquare);
    sigma=sqrt(meansquare);
    printf("\n sigma=%d",sigma);
    return 0;
}
float avg(int c[])
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
    sum=sum+c[i];
    }
    return(sum/n);
}
