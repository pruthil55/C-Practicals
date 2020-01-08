#include<stdio.h>
void factor(int n);
void prime(int x);
int main()
{
    int n;
    printf("enter the number greater:");
    scanf("%d",&n);
    factor(n);
    printf("\n it is created by pmh 18ce031 \n");
    return 0;
}
void factor(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\n %d is factor",i);
            prime(i);
        }
    }
}
void prime(int x)
{
    int j,count=0;
    for(j=2;j<x;j++)
    {
            if(x%j==0)
        {
            count++;
        }
    }
        if(count!=0)
        {
            printf("\n %d is not a prime number",x);
        }
        else
        {
            printf("\n %d is a prime number",x);
        }

}
