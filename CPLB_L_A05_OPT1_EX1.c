#include<stdio.h>

int main() {

    int n,i;
    
    int array[n];
    int *p = array;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    
    for (i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu thu %d cua mang la: ",i);
        scanf("%d", (p + i));
    }
    printf("Mang da nhap vao la: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ",*(p + i));
    }

    int temp;
    
    for (i = 0; i < n/2; i++)
    {
        temp = *(p+i);
        *(p+i) = *(p+n-1-i);
        *(p+n-1-i) = temp;

    }
     
     printf("\nIn nguoc mang: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ",*(p + i));
    }
    

    return 0;
}