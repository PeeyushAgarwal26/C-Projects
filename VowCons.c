#include <stdio.h>
#include <conio.h>

void main(){
    char alp;
    int lc, uc;
    
    printf("Enter the Alphabet: ");
    scanf("%c", &alp);

    uc = (alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U');
    lc = (alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u');

    printf("UC = %d \nLC = %d \n", uc, lc);

    if (uc || lc) printf("Vowel !!");
    else printf("Consonant!!");

    getch();
}