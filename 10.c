#include <stdio.h>
int main(){
    FILE *fp;
    char s[100];
    fp=fopen("10.txt","r");
    printf("File Original Content :- ");
    while (fscanf(fp,"%s",s) != EOF)
    {
        printf("%s ",s);
    }
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        
    }
    printf("\nConvert to Lower Case :- %s \n",s);
    
    fclose(fp);
    return 0;
}