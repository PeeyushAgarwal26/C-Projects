#include <stdio.h>

// Pyramid Pattern

int main() {
    int i, j, n;

    printf("Enter the number of line you want your patter to be: ");
    scanf("%d", &n);

    for (i=0; i<=n; i++) {
        for (j=0; j<=n*2; j++) {
            if (j>n-1-i && j<n-1+i) {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}