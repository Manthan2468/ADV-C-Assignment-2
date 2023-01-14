#include <stdio.h>
#include <string.h>

int main()
{
    char s[200]="My name is Manthan.";
    printf("Given String :- %s\n",s);
    char s2[200];
    printf("Enter the Find Sub-String :- ");
    scanf("%s",&s2);
    printf("Your Sub-String :- %s",strstr(s,s2));
    return 0;
}
