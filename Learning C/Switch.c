#include <stdio.h>

int main(){
    int a, b, c, opt;
    printf("Enter the Operation(+,-,*): ");
    scanf("%d", &opt);

    printf("Enter the First Number: ");
    scanf("%d", &a);

    printf("Enter the Second Number: ");
    scanf("%d", &b);

    switch (opt)
    {
    case 1:
        c = a+b;
        printf("The Sum of %d and %d is %d", a,b,c);
        break;
    
    case 2:
        c = a-b;
        printf("The Difference of %d and %d is %d", a,b,c);
        break;
    
    case 3:
        c = a*b;
        printf("The Product of %d and %d is %d", a,b,c);
        break;
    
    default:
        break;
    }
}