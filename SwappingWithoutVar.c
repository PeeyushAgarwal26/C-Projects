#include <stdio.h>

void main(){

    int a,b;

    printf("Enter the First Number: ");
    scanf("%d", &a);

    printf("Enter the Second Number: ");
    scanf("%d", &b);
    
    printf("Values Before Swap A: %d, B: %d", a,b);

    a = a^b;
    b = a^b;
    a = a^b;

    printf("\nValues After Swap A: %d, B: %d", a,b);
    
    getch();
}










