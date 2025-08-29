#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*fp=NULL;
    char ch;
    int pos;
    char str[50];
    fp=fopen("yeshu.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    pos=ftell(fp);
    printf("%d\n",pos);
    fseek(fp,6,SEEK_SET);
    printf("%d\n",ftell(fp));
    fseek(fp,-2,SEEK_CUR);
    printf("%d",ftell(fp));
    fclose(fp);

}