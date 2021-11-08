#include <stdio.h>

int main()
{
    int n, i;
    int a[n];
    printf("+ Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n > 0 && n <= 10000)
    {
        for (i = 0; i < n; i++)
        {
            printf("+ Nhap phan tu a[%d] cua mang: ", i);
            scanf("%d", a + i);
        }

        printf("\nIn ra mang vua nhap: ");
        for (i = 0; i < n; i++)
        {
            printf("%d; ", *(a + i));
        }

        // tim gia tri nho nhat trong mang
        printf("\n+ Tim so nho nhat va dem so lan xuat hien:\n");
        int minValue;
        int count = 0;
        minValue = *(a);
        for (i = 0; i < n; i++)
        {
            if (minValue > *(a + i))
            {
                minValue = *(a + i);
            }
        }

        // dem so lan xuat hien cua gia tri nho nhat trong mang
        for (i = 0; i < n; i++)
        {
            if (minValue == *(a + i))
            {
                count++;
            }
        }

        printf("So nho nhat la: %d\nSo lan xuat hien la: %d lan", minValue, count);
    }

    else
    {
        printf("Ngoai vung gia tri cho phep! Yeu cau ban nhap tu 1 --> 10000");
    }
}
