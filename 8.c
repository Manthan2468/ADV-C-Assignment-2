#include <stdio.h>

int main()
{
    int s;
    printf("Enter size of matrix: ");
    scanf("%d", &s);
    printf("First Matrix :- \n");
    int a[s][s];
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < s; i++)
    {
        a[i][i] = 1;
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix :- \n");
    int b[s][s];
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            b[i][j] = 0;
        }
    }
    for (int i = 0; i < s; i++)
    {
        b[i][i] = 1;
    }
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Addition of two Diagonal Matrix :- \n");
for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" %d ",a[i][j]+b[i][j]);
        }printf("\n");
    }
    return 0;
}