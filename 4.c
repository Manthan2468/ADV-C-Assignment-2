#include <stdio.h>
int main(){
    int a[100][100],b[100][100],r1,c1;
    printf("Enter the First Matrix Number of Row :- ");
    scanf("%d",&r1);
    printf("Enter the First Matrix Number of Column :- ");
    scanf("%d",&c1);
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < c1; j++){
             printf("\nEnter the value of a[%d][%d] :- ",i,j);   
             scanf("%d",&a[i][j]);
        }     
    }
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < c1; j++){
             printf("\nEnter the value of b[%d][%d] :- ",i,j);   
             scanf("%d",&b[i][j]);
        }     
    }
    printf("Matrix Substraction :- \n");
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < c1; j++){
             printf(" %d ",a[i][j]-b[i][j]);
        }    printf("\n");
    }
    return 0;
}