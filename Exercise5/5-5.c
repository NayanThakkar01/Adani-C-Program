#include <stdio.h>

int main() {
     int a[3][3],i,j,sum=0;
     int mainDiagSum = 0, oppDiagSum = 0; 
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element for index %d [%d] : ",i,j) ;
            scanf("%d",&a[i][j]);
             
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("\n=> Sum of all elemnets in matrix : %d",sum);

      // Diagonals Sum
     for(i = 0; i < 3; i++) { 
        mainDiagSum += a[i][i];       
        oppDiagSum += a[i][2-i];    
    } 
    
    printf("\n=> Sum of Main Diagonal: %d\n", mainDiagSum);
    printf("=> Sum of Opposite Diagonal: %d\n", oppDiagSum);


   
    return 0;
}