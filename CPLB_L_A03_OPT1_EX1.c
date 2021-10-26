#include<stdio.h>

    int main() {

        int m,n;
        int i;
        printf("Nhap so m: ");
        scanf("\n%d",&m);
        printf("Nhap so n: ");
        scanf("\n%d",&n);
        
        if (m>n)
        {
            int temp = m;
            m = n;
            n = temp;
            
        }
        if (m >= 0 && n <= 1000)
        {
            for (i = m; i < n; i++)
            {
                if(i % 2 == 0) //giá trị trong dấu ngoặc() của hàm if phải là 1 biểu thức logic
                {
                printf("%d\n",i);
                }
            }
        }
        
        else
        
        {
            printf("Ngoai vung gia tri cho phep yeu cau ban phai nhap tu 0 den 1000");
        }
        return 0;
    }