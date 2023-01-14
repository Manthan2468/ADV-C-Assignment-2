#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int l,c = 1;
    printf("Enter the String :- ");
    scanf("%s",&s);
    l=strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i] != s[l-i-1])
        {
            c=0;
        }
        
    }
    if (c==1)
    {
        printf("Your String is Palindromic.");
    }else{
        printf("Your String is not Palindromic.");
    }
    return 0;
}
