#include <stdio.h>
#include <stdlib.h>
int main()
{

FILE *fp=NULL;
char str[30];
char ch;


fp=fopen("sri.txt","r+");
if(fp==NULL)
{
    printf("error");
    exit(1);
}
fseek(fp,6,SEEK_SET);
rewind(fp);
while(!feof(fp))
{
    ch=fgetc(fp);
    printf("%c",ch);
}
rewind(fp);
while(!feof(fp))
{
    ch=fgetc(fp);
    printf("%c",ch);
}



fclose(fp);
}