#include<conio.h>
#include <string.h>
#include <stdlib.h>
void program1() {
    int a,b;
    printf("Enter two numbers a and b: ");
    printf("Enter number a: \n");
    scanf("%d",&a);
    printf("Enter number b: \n");
    scanf("%d",&b);

    if(a>b)
    {
        printf("The smaller number is: %d",a);
    }

    else if(b>a)
    {
        printf("The large number is: %d",b);
    }
    else
    {
        printf("Two numbers are equal");
    }
    getch();
}

void program2() {
    int n;
    printf("Enter the number that you want to check: ");
    scanf("%d",&n);
    printf("-------------------------");

    if(n%2==0)
    {
        printf("This number is an even number!");
    }

    else
    {
        printf("This number is an odd number!");
    }
    getch();
}

void program3() {
    int n;
    printf("Enter the number that you want to check: ");
    scanf("%d",&n);
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=n-1; i>=1; i--)
    {
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
}

void program4() {
    int n;
    printf("Enter the number that you want: ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("This number is not a prime number!");
    }

    else if(n==2 || n==4 || n==5 || n== 7)
    {
        printf("This number is a prime number!");
    }

    else if(n%2==0 || n%3==0 || n%5==0 || n%7==0)
    {
        printf("This is not a prime number");
    }

    else
    {
        printf("This is a prime number");
    }

    getch();

}

void program5() {
    int n;
    printf("Enter the number of elements of the string: ");
    scanf("%d",&n);
    char str[n];
    // check:
    int count = 0;
    int i;
    scanf("%s",str);
    int m = strlen(str);
    for(i=0; i<m/2; i++)
    {
        if(str[i]==str[m-i-1])
        {
            count++;
            printf("%c ",str[n]);
        }
    }

    if(count==m/2)
    {
        printf("This is a symmetric string!");
    }

    else
        printf("This is not a symmetric string!");

    getch();
}

