#include<stdio.h>
int main()
{
  int m=3,n=4,l=0,i,j,k=0,a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
 //l=starting col
  //m=ending raw
 //n=ending col
 //k=starting raw
 while(k<m && l<n)
{

 for(i=l;i<n;i++)
 {
     printf("%d ",a[k][i]);
 }
 k++;
 for(i=k;i<m;i++)
   {
     printf("%d ",a[i][n-1]);
   }
n--;
if(k<m)
{
 for(i=n-1;i>=l;i--)
   {
     printf("%d ",a[m-1][i]);
   }
 m--;
}
if(l<n)
  {
    for(i=m-1;i>=k;i--)
      {
        printf("%d ",a[i][l]);
      }
     l++;
  }
}
return 0;
}
