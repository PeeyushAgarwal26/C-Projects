#include <stdio.h>

int main(){
    int i, j, a[2][2], b[2][2], c[2][2];

    printf("Enter the Values of A: \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the Values of B: \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &b[i][j]);  
        }
    }

    printf("The Values of Added Matrix: \n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}