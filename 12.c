#include <stdio.h>
int main(){
    FILE *fp;
    int i=1;
    fp=fopen("12.txt","w");
    for (i = 1; i < 100; i++)
    {
        if (i%2==0)
        {
            fprintf(fp," %d ",i);
        }
        
    }
    fclose(fp);
    return 0;
}