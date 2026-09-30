// User input : 5 student mark and print highest and average

#include <stdio.h>

int main() {
    int i;
    int sum = 0;

    int arr[5];
     for(i=0;i<5;i++)
    {
        printf("%d Student Marks : ",i+1);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    for(i = 0; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("\n\nHighest Marks : %d\n Average : %d ",max,sum/5);


    
    return 0;
}