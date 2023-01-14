#include <stdio.h>

int main()
{
    FILE *fp;
    char s[100];
    char s2[100];
    printf("Enter to Add a content :- ");
    scanf("%s",&s2);
    fp=fopen("1.txt","a");
    fprintf(fp,"%s",s2);
    fclose(fp);
    return 0;
}