#include<stdio.h>
int main()
{
    int i,n,a[100],j,temp;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
    printf("enter the value of a[%d]",i);
    scanf("%d",&a[i]);
    }
for(i=0;i<=n-1;i++)
{
    printf("the value of a[%d] is %d \n ",i,a[i]);
}
for(i=1;i<=n-1;i++)
{
    for(j=0;j<n-1;j++)
    {
    if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
    }
}
for(j=0;j<=n-1;j++)
{
    printf("ascending order is %d",a[j]);
    printf("\n");
}

return 0;
}
