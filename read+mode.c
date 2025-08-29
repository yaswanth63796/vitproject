#include <stdio.h>
#include <stdlib.h>
int main()
{

FILE *fp=NULL;
char str[50];

fp=fopen("amma.txt","r+");
if(fp==NULL)
{
    printf("error");
    exit(1);
}
printf("enter the text to modify:");
gets(str);
fputs(str,fp);
//fputc('s',fp);
//fprintf(fp,"%s","monkey");
fclose(fp);

}