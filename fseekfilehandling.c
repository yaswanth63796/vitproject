#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE*fp=NULL;
    fp=fopen("gayu.txt","r");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

    fseek(fp,7,SEEK_SET);
   ch=fgetc(fp);
    printf("%c\n",ch);
  
    fclose(fp);

}