#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Enter the Character :- ");
    scanf("%c",&c);
    if (isdigit(c))
    {
        printf("Your character is Digit.\n");
    }else if (isalpha(c))
    {
        printf("Your character is Alphabet.\n");
        
    }else{
        printf("Your character is Special Character.\n");
    }
    
    
    return 0;
}