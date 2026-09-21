#include <stdio.h>
int main()
{
    int i, j,k; 
    int n = 1; 
    int rows;

    printf("Enter the rows : ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++)  
    {
        for(k=rows; k>i; k--)  
        {
            printf(" ");
        }


        for(j=1; j<=i; j++)
        {
            printf("%d ",n);
            n++;
            
        }
        printf("\n");
    }
     return 0;
}