#include <stdio.h>
int main(){
    int a[100][100],r1,c1,count=0;
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
    printf("Matrix :- \n");
    for (int i = 0; i <r1; i++)
    {
        for (int j = 0; j <c1; j++)
        {
           printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Even Number is :- ");
    for (int i = 0; i <r1; i++){
        for (int j = 0; j < c1; j++){
            if (a[i][j]%2==0){
                printf(" %d ",a[i][j]);
                count++;
            }
        } 
    }
    printf("\n");
    printf("Total Even Number is %d",count);
    return 0;
}