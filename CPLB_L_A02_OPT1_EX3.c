#include<stdio.h>

int main() {
    
    float number1, number2;

    printf("type number1:");
    scanf("\n%f",&number1);
    printf("type number2:");
    scanf("\n%f",&number2);

    if (number1 == (int)number1 && number2 == (int)number2)
    {   
        int number3 = (int)number1;
        int number4 = (int)number2;
        printf("\nthe result of (number3 + number4): %d",number3 + number4);
        printf("\nthe result of (number3 - number4): %d",number3 - number4);
        printf("\nthe result of (number3 * number4): %d",number3 * number4);
        printf("\nthe result of (number3 / number4): %g",(number3*1.0 / number4));
        printf("\nthe result of (number3 mod number4): %d",(number3%number4));
    }
    
    else 
    {
        printf("\nthe result of (number1 + number2): %f",number1 + number2);
        printf("\nthe result of (number1 - number2): %f",number1 - number2);
        printf("\nthe result of (number1 * number2): %f",number1 * number2);
        printf("\nthe result of (number1 / number2): %g",(number1 / number2));
    }
        
//    return 0;
}