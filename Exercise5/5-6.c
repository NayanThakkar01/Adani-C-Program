#include <stdio.h>

int main() {
     int a[4][4],i,j,sum=0;
     int rowSum, colSum;
     int mainDiagSum = 0, oppDiagSum = 0; 
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the element for index %d [%d] : ",i,j) ;
            scanf("%d",&a[i][j]);
             
        }
    }
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d ",a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("=> Sum of all elemnets in matrix : %d\n\n",sum);


    // row sum
     for(i = 0; i < 4; i++) { 
        rowSum = 0;
        for(j = 0; j < 4; j++) { 
            rowSum += a[i][j]; 
        } 
        printf("=> Sum of Row %d: %d\n", i + 1, rowSum);
    } 
    printf("\n");


    // col sum
    for(j = 0; j < 4; j++) { 
        colSum = 0;
        for(i = 0; i < 4; i++) { 
            colSum += a[i][j]; 
        } 
        printf("=> Sum of Column %d: %d\n", j + 1, colSum);
    } 
    printf("\n");
    // Diagonals Sum
     for(i = 0; i < 4; i++) { 
        mainDiagSum += a[i][i];       
        oppDiagSum += a[i][3-i];    
    } 
    
    printf("=> Sum of Main Diagonal: %d\n", mainDiagSum);
    printf("=> Sum of Opposite Diagonal: %d\n", oppDiagSum);


    return 0;
}