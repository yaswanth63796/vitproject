#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE*fp=NULL;
     char ch;
     
    fp=fopen("mom.txt","a+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

rewind(fp);

 while(!feof(fp))
    {
    ch=fgetc(fp);
    printf("%c",ch);
    }
    
    fputs("is a good boy",fp);
    fclose(fp);
return 0;


}