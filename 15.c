//fread
#include <string.h>
// #include <stdio.h>
// int main(){
//     FILE *fp;
//     char s[100];
//     fp=fopen("15.txt","r");
//     while (fread(s,strlen(s),1,fp))
//     {
//         printf("%s ",s);
//     }
//     printf("File Reading Succesfully");
//     fclose(fp);
//     return 0;
// }

// fwrite
#include <stdio.h>
int main(){
    FILE *fp;
    char s[100];
    fp=fopen("15.txt","w+");
    printf("Enter the Add in File :- ");
    gets(s);
    fwrite(s,strlen(s),1,fp);
   printf("File Write Succesfully");
    fclose(fp);
    return 0;
}