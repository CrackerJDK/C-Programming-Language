#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Tạo struct

struct Vehicle
{
    char cCode[20];
    char cTye[30];
    char cBrand[30];
    char cMainColor[24];
    int nPrice;  // USD
    int nSeat;   // Slot
    int nWeight; // Ton
};

struct Vehicle InputVehicleInfo(struct Vehicle *vehicle) {
    printf("Nhap vao ma xe: ");
    fflush(stdin);
    fgets(&vehicle->cCode, sizeof(vehicle->cCode), stdin);

    printf("Nhap vao loai xe: ");
    fflush(stdin);
    fgets(&vehicle->cTye, sizeof(vehicle->cTye), stdin);

    printf("Nhap vao thuong hieu xe: ");
    fflush(stdin);
    fgets(&vehicle->cBrand, sizeof(vehicle->cBrand), stdin);

    printf("Nhap vao mau xe: ");
    fflush(stdin);
    fgets(&vehicle->cMainColor, sizeof(vehicle->cMainColor), stdin);

    printf("Nhap vao gia xe: ");
    fflush(stdin);
    scanf("%d", &vehicle->nPrice);

    printf("Nhap vao cho ngoi xe: ");
    fflush(stdin);
    scanf("%d",&vehicle->nSeat);

    printf("Nhap vao khoi luong xe: ");
    fflush(stdin);
    scanf("%d", &vehicle->nWeight);

}

void PrintVehicleInfo(struct Vehicle vehicle) {

    printf("Ma so dinh danh: %s\n",vehicle.cCode);
    printf("Kieu xe: %s\n",vehicle.cBrand);
    printf("Thuong hieu xe: %s\n",vehicle.cBrand);
    printf("Color: %s\n",vehicle.cMainColor);
    printf("Gia xe: %d $\n",vehicle.nPrice);
    printf("Cho ngoi: %d slot\n",vehicle.nSeat);
    printf("Khoi luong xe: %d Ton",vehicle.nWeight);
}

int main()
{

    int i,n;
    printf("Nhap vao so loai xe trong danh sach: ");
    scanf("%d",&n);

    struct Vehicle ListVehicle[n];

    // Tìm xe giá cao nhất: 
    for (i = 0; i < n; i++)
    {
        InputVehicleInfo(ListVehicle+i);
    }
    int HighestPrice = ListVehicle[0].nPrice; 
    for (i = 0; i < n; i++)
    {
        if (HighestPrice < ListVehicle[i].nPrice)
        {
            HighestPrice = ListVehicle[i].nPrice;
        }  
    }

    printf("Xe co gia cao nhat la: ");

    for (i = 0; i < n; i++)
    {
        if (ListVehicle[i].nPrice==HighestPrice)
        {   
            printf("\n------------------------------------------------------------------\n");
            PrintVehicleInfo(ListVehicle[i]);
            printf("\n------------------------------------------------------------------\n");
        }
    }
    
    // Tìm xe có giá thấp nhất: 

    int LowestPrice = ListVehicle[0].nPrice; 
    for (i = 0; i < n; i++)
    {
        if (LowestPrice > ListVehicle[i].nPrice)
        {
            LowestPrice = ListVehicle[i].nPrice;
        }  
    }

    printf("Xe co gia thap nhat la: ");

    for (i = 0; i < n; i++)
    {
        if (ListVehicle[i].nPrice==LowestPrice)
        {   printf("\n------------------------------------------------------------------\n");
            PrintVehicleInfo(ListVehicle[i]);
            printf("\n------------------------------------------------------------------\n");
        }
    }

    return 0;
}