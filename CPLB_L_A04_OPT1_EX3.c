#include<stdio.h>

int main()
{
    int i, j, N, M;

    printf("Nhap vao so hang va cot cua ma tran: \n");
    printf("so hang: ");
    scanf("%d", &M);
    printf("\nso cot: ");
    scanf("%d", &N);
    int a[M][N];
    printf("\nnhap vao cac phan tu cua ma tran: \n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

  // quy ve mang 1 chieu ep ma tran thanh cac vector theo cot
    int vector[M];
    int sum;
    
    for (j = 0; j < N; j++)
    {   
        //gan sum = 0 cho moi vong for de tinh tong tung cot
        sum = 0;
        for (i = 0; i < M; i++)
        {
            sum += a[i][j];
            vector[j] = sum;
        }
    }

// tinh tong lon nhat:
    int maxValue = vector[0];
    for (i = 0; i < N; i++)
    {
        if (maxValue < vector[i])
        {
            maxValue = vector[i];
        }
    }
// tinh tong nho nhat:
    printf("tong lon nhat cua cot %d\n", maxValue);

    int minValue = vector[0];
    for (i = 0; i < N; i++)
    {
        if (minValue > vector[i])
        {
            minValue = vector[i];
        }
    }

    printf("\ntong nho nhat cua cot %d", minValue);
}