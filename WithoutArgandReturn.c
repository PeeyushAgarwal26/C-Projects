#include <stdio.h>

int add(){
    int a, b, c;
    printf("Enter the Values.\n");
    scanf("%d%d", &a, &b);
    c = a+b;
    printf("Sum = %d", c);
}

int sub(){
    int a, b, c;
    printf("Enter the Values.\n");
    scanf("%d%d", &a, &b);
    c = a-b;
    printf("Difference = %d", c);
}

int mul(){
    int a, b, c;
    printf("Enter the Values.\n");
    scanf("%d%d", &a, &b);
    c = a*b;
    printf("Product = %d", c);
}

int div(){
    int a, b, c;
    printf("Enter the Values.\n");
    scanf("%d%d", &a, &b);
    c = a/b;
    printf("Quotient = %d", c);
}

int main(){
    add();
    sub();
    mul();
    div();
    return 0;
}