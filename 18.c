#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter the First-String :- ");
    scanf("%s",&s1);
    printf("Enter the Second-String :- ");
    scanf("%s",&s2);
    printf("Compair to both string :- %d",strcmp(s1,s2));
    return 0;
}
