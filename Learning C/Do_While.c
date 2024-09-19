#include <stdio.h>

int main()
{
    int num, i = 1;
    
    printf("\n Enter any Number:");
    scanf("%d", &num);
    printf("Multiplication table of %d: \n", num);
    
    do {
        printf("\n %d x %d = %d", num, i, num * i);
        i++;
    }
    while (i <= 10);
    
    return 0;

}