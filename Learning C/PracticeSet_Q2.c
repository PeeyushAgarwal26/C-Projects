// Percentage of 3 Subs

#include <stdio.h>
#include <math.h>

int main(){
    int maths, phy, chem, total;

    printf("Enter your Maths Marks: ");
    scanf("%d", &maths);

    printf("Enter your Physics  Marks: ");
    scanf("%d", &phy);

    printf("Enter your Chemistry Marks: ");
    scanf("%d", &chem);

    total = maths + phy + chem;
    float per = total/3;

    if (per >= 40 && maths >= 33 && phy >= 33 && chem >= 33){
        printf("You are Pass with %.2f%", per);
    }
    else {
        printf("Sorry, you are fail and scored %.2f%", per);
    }

    return 0;
}