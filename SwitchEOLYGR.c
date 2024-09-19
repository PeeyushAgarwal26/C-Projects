#include <stdio.h>
#include <conio.h>

void main(){
    int a,b,c,op;

    printf("Enter the Number of Operation to Perform \n(1 = Even/Odd,\n2 = Leap Year,\n3 = Max of 2,\n4 = Max of 3): ");
    scanf("%d", &op);

    switch (op){
        case 1:
            printf("Enter the Number: ");
            scanf("%d", &a);

            if (a%2 == 0) printf("%d is Even.", a);
            else printf("%d is Odd.", a);
            break;
        
        case 2:
            printf("Enter the Year: ");
            scanf("%d", &a);

            if (a%4 == 0) printf("%d is a Leap Year.", a);
            else printf("%d is not a Leap Year.", a);
            break;
        
        case 3:         
            printf("Enter the First Number: ");
            scanf("%d", &a); 

            printf("Enter the Second Number: ");
            scanf("%d", &b);

            if (a > b) printf ("A(%d) is Greater than B(%d)", a,b);
            else printf("B(%d) is Greater than A(%d)", b,a);
            break;
        
        case 4:    
            printf("Enter the First Number: ");
            scanf("%d", &a);

            printf("Enter the Second Number: ");
            scanf("%d", &b);

            printf("Enter the Third Number: ");
            scanf("%d", &c);

            if (a>b && a>c) printf ("A(%d) is Greatest.", a);
            else if (b>a && b>c) printf ("B(%d) is Greatest.", b);
            else if (c>a && c>b) printf ("C(%d) is Greatest.", c);
            else printf("All are Equal.");
            break;
    
        default:
            printf("Error!! Enter the Operations Provided !!");
            break;
    }
    getch();
}