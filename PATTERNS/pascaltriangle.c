#include <stdio.h>
int main()
{
    int i, j, k; 
    int rows;

    printf("Enter the rows : ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++)  
    {
        for(k=rows; k>i; k--)  
        {
            printf(" ");
        }
        
        // 1. Every row starts with a value of 1
        int val = 1; 
        
        for(j=1; j<=i; j++)
        {
            printf("%d ", val);
            
            // Main logic of Pascal Triangle
            val = val * (i - j) / j; 
        }
        printf("\n");
    }
     return 0;
}
