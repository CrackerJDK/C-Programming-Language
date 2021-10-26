#include <stdio.h>
#include <string.h>

main()
{
    // Khởi tạo chuỗi
    int i = 0;

    char s[2021];

    printf("<<+>> Nhap chuoi can xet: ");
    fgets(s, sizeof(s), stdin);

    int length = strlen(s);
    // chuyển ký tự in hoa thành ký tự thường
    while (i < length)
    {
        if (s[i] >= 'A' && s[i] < 'a')
        {
            s[i] += 32;
        }
        i++;
    }
    printf("Umbala bien ve chu in hoa ve chu thuong: %s",s);
    return 0;
}