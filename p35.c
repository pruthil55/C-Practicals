#include<stdio.h>
int main()
{
    FILE *fptr;
    int j;
    char ch;
    fptr=fopen("pruthil.txt","r");
    for(j=0;j>=-26;j=j-1)
    {
        fseek(fptr,j,2);
        ch=getc(fptr);
        printf("%c",ch);
    }
    fclose(fptr);
    printf("\n\n it is created by pmh 18ce031");
    return 0;
}
