#include <stdio.h>

int main()
{
    int r, c, l = 1, a[100][100];
    printf("Enter the Row :- ");
    scanf("%d", &r);
    printf("Enter the Column :- ");
    scanf("%d", &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the metrix a[%d][%d] :- ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i==j && a[i][j]!=1){
                l=0;
            }else if(i!=j && a[i][j]!=0){
                l=0;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    if (l==1)
    {
        printf("Identity Done");
    }else{
        printf("Identity not Done");
    }
    

    return 0;
}
