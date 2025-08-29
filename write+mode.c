#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE*fp=NULL;
     char ch;
    fp=fopen("cbe.txt","w+");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
fputs("yashwanth",fp); 
rewind(fp);
while(!feof(fp))
{
    ch=fgetc(fp);
    printf("%c",ch);

}
fclose(fp);
return 0;


}