#include <stdio.h>
#include <conio.h>

void main(){
    int a,b,c;
    a=10;b=20;

    printf("Before Swap a= %d, b= %d", a,b);

    c=a;
    a=b;
    b=c;
    printf("After Swap a= %d, b= %d", a,b);
    
    getch();
}