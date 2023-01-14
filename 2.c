#include <stdio.h>
int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("2.txt","r");
    while(fscanf(fp,"%s\n",s)!=EOF){
         printf(" %s ",s);
    }
    fclose(fp);
    return 0;
}
