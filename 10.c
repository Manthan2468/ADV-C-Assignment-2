#include <stdio.h>
int main(){
    int a[100][100],b[100][100],r,c,s=1;
    printf("Enter the Number of Row :- ");
    scanf("%d",&r);
    printf("Enter the Number of Column :- ");
    scanf("%d",&c);
    printf("First Matrix :- \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j]!=b[i][j])
            {
                s=0;
            }
            
        }
    }
    printf("First Matrix :- \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d ",a[i][j]);
            
        }printf("\n");
    }
   
    if (s==1)
    {
        printf("This Matrix is symmetric");
    }else{
        printf("This Matrix is not symmetric");
    }
    
    
    return 0;
}