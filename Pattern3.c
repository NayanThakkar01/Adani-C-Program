#include <stdio.h>

int main() {
    int i, j;
    int rows;
    char ch = 'a'; 
    printf("Enter the end character : ");
    scanf("%d",&rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf(" %c", ch);
        }
        printf("\n");
        ch++; 
    }
    
    return 0;
}
