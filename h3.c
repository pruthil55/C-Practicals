#include<stdio.h>
int ncr(int j);
int main()
{
    int b,n,r;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("\n enter the value of r:");
    scanf("%d",&r);
    b=ncr(n)/ncr(r)*ncr(n-r);
    printf("\n %d",b);
    return 0;
}
int ncr(int j)
{
    int i,fact=1;
    for(i=1;i<=j;i++)
    {
        fact=fact*i;
    }
    printf("it was created by omh 18ce031");
    return(fact);
}
