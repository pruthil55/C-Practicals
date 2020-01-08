#include<stdio.h>
int main()
{
    int n,i,*x;
    printf("enter the value of n:");
    scanf("%d",&n);
    x=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\n enter the element x[%d]=",i);
        scanf("%d",(x+i));
    }
    sort(x,n);
    for(i=0;i<n;i++)
    {
    printf("\n element x[%d]=%d",i,*(x+i));
    }
    free(x);
    printf("\n it is created by pmh 18ce031");
    return 0;
}
void sort(int *x,int n)
{
    int i,j,*temp;
    for(i=n/2;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(x+i)>*(x+j))
            {
                 temp=*(x+i);
                *(x+i)=*(x+j);
                *(x+j)=temp;
            }
        }
    }
}
