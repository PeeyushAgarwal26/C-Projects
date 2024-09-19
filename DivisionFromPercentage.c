#include <stdio.h>
#include <conio.h>

void main(){
    int phy, chem, maths, eng, hindi, total;
    float per;

    printf("Physics Marks: ");
    scanf("%d", &phy);

    printf("Chemistry Marks: ");
    scanf("%d", &chem);

    printf("Maths Marks: ");
    scanf("%d", &maths);

    printf("English Marks: ");
    scanf("%d", &eng);

    printf("Hindi Marks: ");
    scanf("%d", &hindi);

    total = phy + chem + maths + eng + hindi;
    printf("\nTotal = %d \n", total);
    
    per = total/5;
    printf("Percentage is %f \n",per);

    if (per >= 75) printf("The Division is first.");
    else if (per >= 60 && per < 75) printf("The Division is Second.");
    else if (per >= 35 && per < 60) printf("The Division is Third.");
    else printf("Sorry You can't make it.");

    getch();
}