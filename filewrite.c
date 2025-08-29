#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp=NULL;
char ch='a';
char str[60];
int a=90;
    fp=fopen("abc.txt","w");

    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    printf("enter the string:");
    gets(str);

    //fputc(ch,fp);
    fputs(str,fp);
    //fprintf(fp,"%d %c %s",a,ch,str);

    fclose(fp);
}