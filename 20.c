#include <string.h>
#include <stdio.h>
int main(){
    char s[100];
    int i;
    printf("Enter the String :- ");
    scanf("%s",&s);
    for (i = 0; s[i] != '\0' ; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z'){
          s[i]=s[i]-32;
        }else if((s[i] >= 'A' && s[i] <= 'Z')){
           s[i]=s[i]+32; 
        }else{
            printf("You Have enter special char or digit");
        }
        
    }
    printf("  Lowercase Characters by Uppercase & Vice-Versa :- %s\n",s);
    return 0;
}