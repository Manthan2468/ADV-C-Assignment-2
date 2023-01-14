#include <stdio.h>
//This is the pending
int main(){
    int a[20][20][20],r,c,z;
    // printf("Enter the number of Row :-");
    // scanf("%d",&r);

    // printf("Enter the number of Column :-");
    // scanf("%d",&c);

    // printf("Enter the number of Third Axis :-");
    // scanf("%d",&z);

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
        for (int k = 0; k <2 ; k++)
        {
        printf("Enter the value a[%d][%d][%d] = ",i,j,k);
        scanf("%d",&a[i][j][z]);
        }
        }
    }
    printf("3-D Array is :- \n");
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
           for (int k = 0; k <2; k++)
        {
           printf(" %d ", a[i][j][k]);
           if (k==2)
           {
           printf("\n");
           }
           
        }
        }
        printf("\n");
    }
    
    return 0;
}