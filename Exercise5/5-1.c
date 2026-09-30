// Print upto n number 

#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the (n) : ");
    scanf("%d",&n);
    int arr[n];
   for(i=0;i<n;i++)
    {
        printf("Enter your %d index : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n=> Elemnets in array are : ");
     for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
     }
    return 0;
}