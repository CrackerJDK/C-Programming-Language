#include<stdio.h>

int main() {
    int n;
    int i,j;
    printf("type a number you want: ");
    scanf("%d",&n);

    if (n>0 && n<=20)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf(" %d",i);
            }
            printf("\n");
        }
        
    }
    
    return 0;
}