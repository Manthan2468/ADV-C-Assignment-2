#include <stdio.h>
int main(){
    FILE *fp;
    char s[100];
    char l1;
    int c=0;
    fp=fopen("4.txt","r");
    while((l1=fgetc(fp)) !=EOF){
        if ( l1 =='\n' || l1 =='\0'){
            c++;
        }
    }
    printf("Total Lines in File :- %d\n",c+1);
    return 0;
}