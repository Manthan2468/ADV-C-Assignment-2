#include <stdio.h>
int main()
{
    FILE *fp;
    char s[100];
    fp=fopen("1.txt","w");
    fprintf(fp,"Hello World!");
    fclose(fp);
    return 0;
}
