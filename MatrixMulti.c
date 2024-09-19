// Multiplication in 2D Array
#include <stdio.h>

int main(){
    int i, j, k, l = 0;
    int a[3][3], b[3][3], c[3][3];
        
    printf("Enter Values of A: ");
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter Values of B: ");
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            for (k = 0; k<3; k++){
                l = l + a[i][k]*b[k][j];
            }
            c[i][j] = l;
            l = 0;
        }
    }
    
    printf("Multiplied Matrix: \n");
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}