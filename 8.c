#include <stdio.h>
int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char s1[100],s2[100];
    char c,c2[100];
    fp1=fopen("4.txt","r");
    printf("First's File Content :- ");
    while (fscanf(fp1,"%s\n",s1)!=EOF)
    {
        printf("%s ",s1);
    }
    fp2=fopen("7.txt","r");
    printf("\nSecond's File Content :- ");
    while (fscanf(fp2,"%s\n",s2)!=EOF)
    {
        printf("%s ",s2);
    }
    fp3=fopen("8.txt","w+");
    fprintf(fp3,"%s %s",s1,s2);
    printf("\n Third File is :- %s %s",s1,s2);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}