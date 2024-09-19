#include <stdio.h>
#include <conio.h>

void main(){
    int num;

    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num == 0) printf("Zero is neither positive nor negative.");
    else if (num >= 0) printf("Positive.");
    else printf("Negative.");

    getch();
}