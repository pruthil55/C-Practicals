#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int x,l1,l2,i,j,temp,flag,n;
    printf("enter string s1:");
    gets(s1);
    printf("\n enter string s2:");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    n=l1;
    if(l1==l2)
    {
    temp=0;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(s1[j]>s1[j+1])
                {
                    temp=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=temp;
                }
            }
        }
        flag=0;
        for(i=0;i<n;i++)
        {

            for(j=0;j<n-1;j++)
            {
                if(s2[j]>s2[j+1])
                {
                    flag=s2[j];
                    s2[j]=s2[j+1];
                    s2[j+1]=flag;
                }

            }
        }
        x=strcmp(s1,s2);
        if(x==0)
        {
            printf("\n yes s1 is a permutation of s2");
        }
        else
        {
            printf("\n no s1 is not a permutation of s2");
        }
    }
        else
        {
            printf("\n string length is not same");
        }
        printf("\n it was created by pmh 18ce031 \n ");

 return 0;
}



