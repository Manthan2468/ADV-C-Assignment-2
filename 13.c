#include <stdio.h>
int main(){
    FILE *fp;
    int l;
    fp=fopen("13.txt","w+");
    fprintf(fp,"God Mahadev");
    // fseek(fp,0,SEEK_CUR);
    fseek(fp,0,SEEK_END);
    // fseek(fp,0,SEEK_SET);   
    fprintf(fp," And Mata Parvati");
    l=ftell(fp);
    printf("\nThe Length of file :- %d\n\n",l);
    fclose(fp);
    return 0;
}