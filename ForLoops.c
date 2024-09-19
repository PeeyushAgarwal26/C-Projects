#include <stdio.h>
#include <math.h>

int main(){
    int i, num;

    /* Counting Loop */

    for (i=1; i <= 100; i++){
        printf("%d,",i);
    }


    /* Table Loop */

    printf("Enter the number for table: ");
    scanf("%d", &num);

    for (i=1; i <=10; i++){
        printf("%d x %d = %d \n", num, i, num*i);
    } 


    /* Square of 1 to 20 */

    for (i=1; i<=20; i++){
        printf("Square of %d = %.0lf \n", i, pow(i,2));
    }

    return 0;
}