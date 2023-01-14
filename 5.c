#include <stdio.h>
int main(){
    FILE *fp;
    char s[100];
    int c=0;
    printf("File Content is :- ");
    fp=fopen("4.txt","r");
    while(fscanf(fp,"%s\n",s)!=EOF){
         printf(" %s ",s);
    }
    for (int i = 0; s[i] != '\0' ; i++)
    {
       c++;
    }
    printf("\nTotal Digit And White Spaces :- %d",c);
    fclose(fp);
    return 0;
}