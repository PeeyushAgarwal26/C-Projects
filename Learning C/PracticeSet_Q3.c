// Tax from given Income Slabs

#include <stdio.h>

int main(){
    float income, amount;

    printf("Enter your Income in Lakhs: ");
    scanf("%f", &income);

    if (income >= 10){
        amount = (income/100)*30;
        printf("You have to pay 30 percentage of your Income i.e. %.2fL and your Payable Tax Amount is %.2fL", income, amount);
    }

    else if (income < 10 && income >= 5){
        amount = (income/100)*20;
        printf("You have to pay 20 percentage of your Income i.e. %.2fL and your Payable Tax Amount is %.2fL", income, amount);
    }

    else if (income < 5 && income >= 2.5){
        amount = (income/100)*5;
        printf("You have to pay 5 percentage of your Income i.e. %.2fL and your Payable Tax Amount is %.2fL", income, amount);
    }

    else {
        printf("You don't have to pay Taxes, your Income is %.2fL", income);
    }

    return 0;
}