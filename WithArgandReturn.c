#include <stdio.h>

int add(int x, int y){
    int c = x + y;
    return (c);
}

int sub(int x, int y){
    int c = x - y;
    return (c);
}

int mul(int x, int y){
    int c = x * y;
    return (c);
}

int div(int x, int y){
    int c = x / y;
    return (c);
}

int main(){
    int a,b;
    printf("Enter Numbers: ");
    scanf("%d%d", &a, &b);
    printf("Sum is %d \n", add(a,b));
    printf("Difference is %d \n", sub(a,b));
    printf("Product is %d \n", mul(a,b));
    printf("Quotient is %d", div(a,b));
    return 0;
}