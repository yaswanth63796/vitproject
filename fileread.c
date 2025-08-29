#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char ch;

    fp=fopen("code.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    fclose(fp);

}