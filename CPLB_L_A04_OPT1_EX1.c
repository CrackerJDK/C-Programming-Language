#include <stdio.h>

int main()
{
    int n, m, i;
    printf("Ban hay nhap vao so phan tu cua mang va so m\n");
    scanf("\n%d", &n);
    scanf("\n%d", &m);

    float a[n];
    int count = 0;
    printf("ban hay nhap vao tung phan tu cua mang: \n");

    if (n >= 0 && n <= 1000)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%f", &a[i]);
        }

        for (i = 0; i < n; i++)
        {
            m = 1.0 * m;
            if (a[i] < m)
            {
                count++;
            }
        }
        printf("So phan tu nho hon so m la: %d", count);
    }

    else 
    {
        printf("Out of range: \n0 <= n <= 1000 ");
    }

    return 0;
}