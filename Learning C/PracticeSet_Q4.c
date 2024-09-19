// Greatest number from 4 numbers

#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter 1 Number: ");
    scanf("%d", &a);   
    
    printf("\nEnter 2 Number: ");
    scanf("%d", &b);   
    
    printf("\nEnter 3 Number: ");
    scanf("%d", &c);   
    
    printf("\nEnter 4 Number: ");
    scanf("%d", &d);   

    if (a>b && a>c && a>d){
        printf("A is Greatest of all");
    }

    else if (b>a && b>c && b>d){
        printf("B is Greatest of all");
    }

    else if (c>b && c>a && c>d){
        printf("C is Greatest of all");
    }

    else if (d>b && d>c && d>a){
        printf("D is Greatest of all");
    }

    return 0;
}