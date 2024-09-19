#include <stdio.h>

int main(){
    int row, col, a[3][3], b[3][3], c[3][3];
    
    printf("Enter Values of A: \n");
    for (row= 0; row<3; row++){
        for (col= 0; col<3; col++){
            scanf("%d", &a[row][col]);
        }
    }
    
    printf("Enter Values of B: \n");
    for (row= 0; row<3; row++){
        for (col= 0; col<3; col++){
            scanf("%d", &b[row][col]);
        }
    }
    
    printf("Values:\n");  

    for (row= 0; row<3; row++){
        for (col= 0; col<3; col++){
            c[row][col] = a[row][col] + b[row][col];
            printf("%d \t", c[row][col]);
        }
        printf("\n");
    }

    return 0;
}