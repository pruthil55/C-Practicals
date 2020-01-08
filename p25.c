#include<stdio.h>
struct result
{
    int rno;
    int m1,m2,m3;
    int total;
};
int main()
{
    struct result s[5],temp;
    int i,j;
    for(i=0;i<5;i++)
    {
            printf("enter roll no. of s[%d]=",i);
            scanf("%d",&s[i].rno);
            printf("\n enter the value of marks of 3 subject");
            scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);
            s[i].total=s[i].m1+s[i].m2+s[i].m3;
            printf("the total of marks is =%d",s[i].total);
            printf("\n");
    }
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
          {
            if(s[j].total<s[j+1].total)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
          }
    }
    printf("rno \t sub1 \t sub2 \t sub3 \t total");
    for(i=0;i<5;i++)
    {
       printf("\n");
       printf("%d \t %d \t %d \t %d \t %d",s[i].rno,s[i].m1,s[i].m2,s[i].m3,s[i].total);
    }
    printf("\n it is created by pmh 18ce031 \n")
 return 0;
}
