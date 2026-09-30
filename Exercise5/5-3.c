// Print max and min

#include <stdio.h>

int main() {
    int i;

    int arr[5];
     for(i=0;i<5;i++)
    {
        printf("Enter your %d index : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];

    for(i = 0; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i]; 
        }
    }
    printf("\n\nMax : %d | Min : %d " ,max,min);


    
    return 0;
}