#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void CompareTwoStrings(char s1[], char s2[])
{
    int length1, length2;
    length1 = strlen(s1);
    length2 = strlen(s2);

        if (length1 == length2)
        {
            printf("Equal length");
        }

        else if (length1 < length2)
        {
            printf("The longer string is: %s", s2);
        }

        else
        {
            printf("The longer string is: %s", s1);
        }
}

int main()
{

    char s1[2021];
    char s2[2021];

    printf("Nhap vao 2 chuoi: \n");

    printf("Chuoi s1 la: ");
    scanf("%[^\n]%*c",s1);

    printf("Chuoi s2 la: ");
    scanf("%[^\n]%*c",s2);

    CompareTwoStrings(s1, s2);

    return 0;
}