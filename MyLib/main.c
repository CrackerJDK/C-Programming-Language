#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "MyLib.h"

int main()
{
    int choice;

    do{
        system("cls");
        printf("\tMENU\n");
        printf("1. Program 1 Check for larger numbers\n");
        printf("2. Program 2 Check even and odd numbers\n");
        printf("3. Program 3 Draw a triangle with the * character\n");
        printf("4. Program 4 Check the prime number\n");
        printf("5. Program 5 Check a symmetric string\n");
        printf("6. Program 6 Print the Fibonacci sequence\n");
        printf("7. Exit\n\n");
        printf("Select function: ");
        scanf("%d",&choice);

        system("cls");

        switch(choice)
        {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        case 4:
            program4();
            break;
        case 5:
            program5();
            break;
        case 6:
            printf("Enter the number that you want: ");
            int n;
            n = scanf("%d",&n);
            int i;
            int f0 = 0;
            int f1 = 1;
            int fn = 1;

            if (n < 0) {
                printf("-1");
            } else if (n == 0 || n == 1) {
                printf("1");
            } else {
                for (i = 2; i < n; i++) {
                    f0 = f1;
                    f1 = fn;
                    fn = f0 + f1;
                    printf("%d, ",fn);
                }
            }
            break;
        case 7:
            printf("Good bye see you later!\n");
            break;
        }


    } while(choice!=7);
    return 0;
}

int Fibonacci(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
