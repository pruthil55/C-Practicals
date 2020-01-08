#include<stdio.h>
int main()
{
    int lok,key,loc,i,min,a[10],n,temp,max;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
    printf("enter the value of a[%d]",i);
    scanf("%d",&a[i]);
    }
for(i=0;i<=n-1;i++)
{
    printf("the value of %d is %d \n ",i,a[i]);
}
    min=a[0];
    loc=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {

            min=a[i];
            loc=i;
        }
    }
        printf("\n minimum is=%d",min);
        printf("\n location of minimum is=a[%d]",loc);
        max=a[0];
        temp=0;
        for(i=1;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                temp=i;
            }
        }
printf("\n maximum is=%d",max);
printf("\n temp is=a[%d]",temp);
printf("\n enter a number which you want to search");
scanf("%d",&key);
for(i=0;i<n;i++)
{
    if(a[i]==key)
    {
        printf("\n your number is found in array");
        lok=i;
    }
}
    printf("\n lok of key is=a[%d]",lok);

return 0;
}
