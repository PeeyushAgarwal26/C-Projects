#include <stdio.h>

int main(){
    int n, i=0, a=0;
    printf("Enter the numbers you want to print: ");
    scanf("%d", &n);

    while(i<=n){
        a+=i;
        i++;
    }
    printf("%d", a);
    return 0;
}