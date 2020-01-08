#include<stdio.h>
int main(int argc,char *argv[])
{
    FILE *fptr1,*fptr2,*fptr3;
    int x,y;
    printf("no of value is :%d",argc);
    printf("\n name of first file is :%s",argv[1]);
    printf("\n name of second file is :%s",argv[2]);
    printf("\n name of third file is :%s",argv[3]);
    fptr1=fopen("data1.txt","r");
    fptr2=fopen("data2.txt","r");
    fptr3=fopen("data3.txt","w");
    while(!feof(fptr1))
    {
        x=getw(fptr1);
        fprintf(fptr3,"%d",x);
    }
    while(!feof(fptr2))
    {
        y=getw(fptr2);
        fprintf(fptr3,"%d",y);
    }

   fclose(fptr1);
   fclose(fptr2);
   fclose(fptr3);
   return 0;
}
