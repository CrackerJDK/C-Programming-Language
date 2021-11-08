#include <stdio.h>
#include <string.h>

int main()
{
    //khởi tạo chuỗi
    int i;
    char word[100];
    printf("Nhap tu chuoi ky tu can kiem tra: ");
    fflush(stdin);
    fgets(word, sizeof(word), stdin);
    
    printf("+ Dem so phan tu cua chuoi \n");

    int length = strlen(word);

    printf(" %d ",length);
    //kiểm tra xem có bao nhiêu nguyên âm trong chuỗi:
    
    int count = 0;
    for (i = 0; i < length; i++)
    {
        //kiểm tra ký tự nguyên âm bao gồm cả ký tự in hoa
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i' || word[i] == 'o' || word[i] == 'A' || word[i] == 'E' || word[i] == 'U' || word[i] == 'I' || word[i] == 'O' )
        {
            count++;
            printf("%c ",word[i]);
        }
    }

    printf("So nguyen am trong chuoi vua nhap la: %d", count);
    

}


