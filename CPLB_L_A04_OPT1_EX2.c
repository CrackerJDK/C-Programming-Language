#include <stdio.h>

int main()
{
    int i, N, p;
    printf("Nhap vao so phan tu cua mang:\n ");
    scanf("%d",&N);
    int a[N];
    printf("Hay nhap vao cac phan tu cua mang:\n");

    if (N >= 0 && N <= 1000)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &a[i]);
        }

        int maxValue;
        maxValue = a[0];
        for (i = 0; i < N; i++)
        {
            if (maxValue < a[i])
            {
                maxValue = a[i];
            }
        }

        int count = 0;
        for (i = 0; i < N; i++)
        {
            if (maxValue == a[i])
            {
                count++;
            }
            
        }
        printf("\nGia tri lon nhat la: %d",maxValue);
        printf("\nSo lan xuat hien cua N la: %d",count);
    }

    else
    {
        printf("Out of range! 0 <= N <= 1000 ");
    }
}