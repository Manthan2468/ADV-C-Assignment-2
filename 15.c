#include <ctype.h>
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the Character :- ");
    scanf("%c",&c);
    if (islower(c))
    {
        printf("Your Character is Lower Case.");
    }
    else if (isupper(c))
    {
        printf("Your Character is Upper Case.");
    }
    
    
    return 0;
}
