#include <stdio.h>
#include <conio.h>

void main(){
    char alp;

    printf("Enter the Alphabet: ");
    scanf("%c", &alp);

    switch (alp){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel !!");
        break;
    
    default:
        printf("Consonant !!");
        break;
    }
}