#include <stdio.h>
#include <conio.h>

void main(){
    char op;
    int a,b;

    printf("Enter the Operation to Perform (+,-,*,/): ");
    scanf("%c", &op);
    
    printf("Enter the First Number: ");
    scanf("%d", &a);
    
    printf("Enter the Second Number: ");
    scanf("%d", &b);

    switch (op){
        case '+':
            printf("Sum of %d and %d is %d.", a,b, a+b);
            break;
        
        case '-':
            printf("Difference of %d and %d is %d.", a,b, a-b);
            break;
        
        case '*':
            printf("Multiple of %d and %d is %d.", a,b, a*b);
            break;
        
        case '/':
            printf("Quotitent of %d and %d is %d.", a,b, a/b);
            break;
    
        default:
            printf("Error!! Enter the Operations Provided !!");
            break;
    }

    getch();
}