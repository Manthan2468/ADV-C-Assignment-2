#include <string.h>
#include <stdio.h>
int main(){
    char s[100];
    int v=0,c=0;
    printf("Enter the String :- ");
    scanf("%s",&s);
    for (int i = 0; s[i] != '\0' ; i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' ){
          v++;  
        }else{
            c++;
        }
        
    }
    printf("Totle Number of Vowel :- %d\n",v);
    printf("Totle Number of Constant :- %d\n",c);
    return 0;
}