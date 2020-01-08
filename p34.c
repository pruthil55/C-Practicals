#include<stdio.h>
int main()
{
    char ch;
    FILE f1,f2,*fptr1,*fptr2;
    fptr1=fopen("f1.txt","r");
    fptr2=fopen("f2.txt","w");
    if(fptr1==NULL)
    {
        printf("file can not be opened");
    }
    if(fptr2==NULL)
    {
        printf("file can not be opened");
    }

    while(!feof(fptr1))
    {
        ch=getc(fptr1);
       putc(ch,fptr2);
       printf("%c",ch);

    }

    fclose(fptr1);
    fclose(fptr2);
}
