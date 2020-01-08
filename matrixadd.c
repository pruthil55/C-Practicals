#include<stdio.h>
int main()
{
    int i,j,m,n,p,q,a[100][100],b[100][100],c[100][100];
    printf("enter the number of row and column of matrix a=");
    scanf("%d%d",&m,&n);
    printf("enter the number of row and column of matrix b=");
    scanf("%d%d",&p,&q);
    if(m==p&&n==q)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter the value of element of matrix a from row wise");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
     for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("enter the value of element of matrix b from row wise");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<p;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
            printf("%d",b[i][j]);
        }
    }
    printf("\n the sum of both matrix is =");
    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
    }
    }
    else
    {
        printf("addition is not possible");
    }
    printf("\n it is created by pmh 18ce031");
    return 0;
}
