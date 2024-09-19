#include <stdio.h>
#include <conio.h>

void main(){
    int length, breadth, height, radius, op;

    printf("Enter the number of Operation :- \n1 = Area of Circle \n2 = Area of Square \n3 = Area of Triangle \n4 = Area of Rectangle: ");
    scanf("%d", &op);

    switch (op){
    case 1:
        printf("Enter the Radius of Circle: ");
        scanf("%d", &radius);

        printf("Area of Circle = %.2f .", 3.14*radius*radius);
        break;
    
    case 2:
        printf("Enter the Length of Square: ");
        scanf("%d", &length);

        printf("Area of Square = %d.", length*length);
        break;
    
    case 3:
        printf("Enter the Base of Triangle: ");
        scanf("%d", &length);
        
        printf("Enter the Height of Triangle: ");
        scanf("%d", &height);

        printf("Area of Triangle = %.2f .", 0.5*length*height);
        break;
    
    case 4:
        printf("Enter the Length of Rectangle: ");
        scanf("%d", &length);
  
        printf("Enter the Breadth of Rectangle: ");
        scanf("%d", &breadth);

        printf("Area of Circle = %d.", length*breadth);
        break;
    
    default:
        printf("Error!! Enter the Valid Operation.!");
        break;
    }

    getch();

}

// Area of Triangle: 0.5*base*height
// Area of Circle: 3.14*radius*radius
// Area of Rectangle: length*breadth
// Area of Square: side*side

