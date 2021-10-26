#include <stdio.h>

int main()
{
    int i, n;
    int total = 0;
    int c = 500;
    int t = 150;
    int s = 600;
    int p = 50;
    int inputComponent;
    printf("Nhap so luong thanh phan tuy chon ma ban muon: \n");
    scanf("%d", &n);
    printf("\nBan co the nhap nhieu lan moi thanh phan: \n");
    if (n > 20)
        
    {
        printf("You can only enter up to 20 ingredients!\n");
    }

    else
    {
        for (i = 1; i <= n; i++)
        {
            fflush(stdin);
            scanf("%c", &inputComponent);
            switch (inputComponent)
            {
            case 'c':
                total += c;
                break;

            case 't':
                total += t;
                break;

            case 's':
                total += s;
                break;

            case 'p':
                total += p;
                break;

            default:
                total += 0;
                break;
            }
        }
        printf("Total calorie content: %d", total);
    }

    
    return 0;
}
