#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp1;
    FILE *fp2;
    char s1[100];
    fp1=fopen("2.txt","r");
    printf("Original File Content :- ");
    while(fscanf(fp1,"%s",s1)!=EOF){
        printf("%s ",s1);
    }
    fp2=fopen("7.txt","w");
    if(fprintf(fp2,"%s",s1)){
        printf("\nCopied File's Content :- %s",s1);
    }
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}