#include <stdio.h>
#include <conio.h>

void main(){
    char letter;

    printf("Enter the Character: ");
    scanf("%c", &letter);

    printf("ASCII code for %c is %d", letter, letter);

    getch();
}