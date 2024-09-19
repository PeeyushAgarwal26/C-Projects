#include <stdio.h>

int main(){
    char ratings;

    printf("Enter your rating: ");
    scanf("%c", &ratings);

    // Switch case me string wala use krna ho to '' use hote h "" nahi "" use kia toh error aayegi !!

    switch (ratings)
    {
    case '1':
        printf("Your rating is *\n");
        break;
    
    case '2':
        printf("Your rating is **\n");
        break;
    
    case '3':
        printf("Your rating is ***\n");
        break;
    
    case '4':
        printf("Your rating is ****\n");
        break;
   
    case '5':
        printf("Your rating is *****\n");
        break;
    
    default:
        printf("Invalid Rating\n");
        break;
    }

    return 0;
}