#include <stdio.h>

int main()
{
    FILE *fp;
    char s[100];
    printf("ENter to write a file :- ");
    scanf("%s",&s);
    fp=fopen("1.txt","w+");
    fprintf(fp,"%s",s);
    fclose(fp);
    return 0;
}
