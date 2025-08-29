#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp=NULL;

fp=fopen("doc.txt","a");
char str[50];

if(fp==NULL)
{
    printf("error");
    exit(1);
}

printf("enter the content you want to add:");
gets(str);
fprintf(fp,"\n%s",str);
fclose(fp);
}