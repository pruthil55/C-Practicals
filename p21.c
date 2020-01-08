#include<stdio.h>
int fib(int n);
int main()
{
    int n,i;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d \n",fib(i));
    }
    printf("\n it is created by pmh 18ce031 \n");
    return 0;
}
int fib(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}

