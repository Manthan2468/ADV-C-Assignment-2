#include <stdio.h>


int main(){
    int a[100][100],b[100][100],c[100][100],r1;
    printf("Enter the First Matrix Number of Row :- ");
    scanf("%d",&r1);
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < r1; j++){
             printf("\nEnter the value of a[%d][%d] :- ",i,j);   
             scanf("%d",&a[i][j]);
        }     
    }
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < r1; j++){
             printf("\nEnter the value of b[%d][%d] :- ",i,j);   
             scanf("%d",&b[i][j]);
        }     
    }
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < r1; j++){
             c[i][j]=0;
             for (int k = 0; k < r1 ; k++)
             {
                c[i][j] += a[i][k]*b[k][j];
             }
             
        }    
    }
    printf("Matrix Multiplication :- \n");
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < r1; j++){
             
                printf(" %d ",c[i][j]);
             
        }    printf("\n");
    }
    return 0;
}