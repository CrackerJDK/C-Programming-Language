#include <stdio.h>

int main()
{
    int N, W;
    int i, j, k;
    printf("type number n: ");
    scanf("\n%d", &N);

    printf("type number m: ");
    scanf("\n%d", &W);

    int value = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < W - 1; j++)
        {

            if (j == 0)
            {

                for (k = 0; k < W; k++)
                {
                    printf("%d", value);
                    value += 1;
                    if (value > 9)
                    {
                        value = 0;
                    }
                }

                printf("\n");
            }

            else
            {

                printf("%d", value);
                value += 1;
                if (value > 9)
                {
                    value = 0;
                }
                printf("\n");
            }
        }
    }

    for (k = 0; k < W; k++)
    {
        printf("%d", value);
        value += 1;
        if (value > 9)
        {
            value = 0;
        }
    }
    printf("\n");

    return 0;
}