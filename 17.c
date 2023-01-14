#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[100];
    printf("Enter the First-String :- ");
    scanf("%s",&s1);
    printf("First String = %s and copied string = %s\n ",s1,strcpy(s2,s1));
    return 0;
}