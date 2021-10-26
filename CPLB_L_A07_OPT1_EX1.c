#include <stdio.h>

void calculator(int A, int B)
{
    int addition = A + B;
    int subtract = A - B;
    int multiple = A * B;
    int division = A / B;
    int module = A % B;
    printf("ADD(A, B) = %d\n", addition);
    printf("SUB(A, B) = %d\n", subtract);
    printf("MUL(A, B) = %d\n", multiple);
    printf("DIV(A, B) = %d\n", division);
    printf("MOD(A, B) = %d\n", module);
}

int main()
{
    int A, B;
    printf("Nhap vao hai so A va B: \n");

    printf("So A la: ");
    scanf("%d", &A);

    printf("So B la: ");
    scanf("%d", &B);

    if (A >= -2021 && A <= 2021 && B >= -2021 && B <= 2021)
    {

        printf("Cac phep tinh (+) (-) (*) (/) (mod): \n");

        calculator(A, B);
    }

    else
    {
        printf("Warning: One number or two numbers are out of scope!");
    }

    return 0;
}