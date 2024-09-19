#include <stdio.h>

int main(){
    int num, a=1, f=1;

    printf("Enter the number: ");
    scanf("%d", &num);

    do
    {
        f = f*a;
        a++;
    } while (a<=num);
    printf("Factorial of %d is %d.", num, f);
    return 0;
}
