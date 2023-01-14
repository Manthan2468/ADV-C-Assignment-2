#include <stdio.h>
int main(){
    FILE *fp;
    char s[100];
    char c1;
    int c=0;
    fp=fopen("4.txt","r");
    while((c1=fgetc(fp)) !=EOF){
        if (c1 ==' ' || c1 =='\n' || c1 =='\0' || c1 == '\t')
        {
            c++;
        }
    }
    printf("\nTotal Words in File :- %d\n",c);
    return 0;
}