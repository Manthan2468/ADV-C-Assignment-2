#include <stdio.h>
int main(){
    int a[100][100],r,c,l=1;
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
   for (int i = 0; i <r; i++)
    {
        for (int j = 0; j <c; j++)
        {
          if (j > i && a[i][j]!=0)
          {
             l=0;
          }
          
        }printf("\n");
    }
 
  if (l==1)
  {
    printf("Upper Triangular matrix");
  }else{
    printf("NOt a Upper Triangular matrix");
  }
    return 0;
}         






