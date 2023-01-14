#include <stdio.h>
int main(){
    FILE *fp;
    char s[100];
    fp=fopen("11.txt","r");
    printf("File Original Content :- ");
    while (fscanf(fp,"%s",s) != EOF)
    {
        printf("%s ",s);
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    printf("\nConvert to Upper Case :- %s \n",s);
    
    fclose(fp);
    return 0;
}