#include <stdio.h>
int main(){
    FILE *fp;
    char s[100];
    int c1=0,c2=0;
    printf("File Content is :- ");
    fp=fopen("4.txt","r");
    while(fscanf(fp,"%s\n",s)!=EOF){
         printf(" %s ",s);
    }
    for (int i = 0; s[i] != '\0' ; i++)
    {
        if (s[i] >= '0' && s[i] <='9')
        {
            c1++;
        }else if ((s[i] >= 'a' && s[i] <= 'z') && (s[i] >= 'A' && s[i] <= 'Z'))
        {
        }else{
            c2++;
        }
        
        
    }
    printf("\nTotal Digit And White Spaces :- %d",c1+c2);
    fclose(fp);
    return 0;
}