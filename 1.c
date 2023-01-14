#include <stdio.h>
int main(){
    int a[100][100],r,c;
    printf("Enter the number of Row :-");
    scanf("%d",&r);
    printf("Enter the number of Column :-");
    scanf("%d",&c);
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
           printf("Enter the value a[%d][%d] = ",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    printf("2-D Array is :- \n");
    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
           printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}