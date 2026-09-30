// Sum of all elements of array

#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enter the (n) : ");
    scanf("%d",&n);
    int arr[n];
   for(i=0;i<n;i++)
    {
        printf("Enter your %d index : ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("\n=> Sum of Elemnets in array are : ");
     
        printf(" %d",sum);

         return 0;
}