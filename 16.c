#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i;
    printf("Enter the String :- ");
    scanf("%s",&s);
    for (i = 0; s[i] != '\0'; i++);
    printf("Length of String :- %d\n",i);
    
    return 0;
}
