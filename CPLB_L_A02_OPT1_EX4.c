#include<stdio.h>

int main() {
    int number1, number2;
    printf("Type number1: ");
    scanf("\n%d",&number1);
    
    printf("\nType number2: ");
    scanf("\n%d",&number2);
    int number3,number4;

    number4 = number1 % number2;
    number3 = (number1 - number4)/number2;

    printf("\nThe remainder of this division is number3: %d ",number4);
    printf("\nThe integral quotient of this division is number4: %d ",number3);
}