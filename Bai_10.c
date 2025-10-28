#include <stdio.h>

int main(){
    float electricity_consumed, bill, total_bill;
    const float surcharge_1 = 0.05;
    const float surcharge_2 = 0.1;
    const float surcharge_3 = 0.08;
    const float price_1 = 1500;
    const float price_2 = 2000;
    const float price_3 = 2500;
    const float price_4 = 3000;
    int customer_type;
    printf("Nhap so dien tieu thu cua ca thang (kWh): ");
    scanf("%f",&electricity_consumed);
    printf("Nhap loai khach hang (1- Gia dinh, 2- Kinh doanh, 3- San xuat): ");
    scanf("%d",&customer_type);

    if(electricity_consumed < 0){
        printf("So dien tieu thu khong hop le");
        return 1;
    }
    
    if(electricity_consumed <= 50){
                bill = electricity_consumed * price_1;
            }
            else if(51 <= electricity_consumed && electricity_consumed <= 100){
                bill = 50 * price_1 + (electricity_consumed - 50) * price_2;
            }
            else if(101 <= electricity_consumed && electricity_consumed <= 200){
                bill = 50 * price_1 + 50 * price_2 + (electricity_consumed - 100) * price_3;
            }
            else{
                bill = 50 * price_1 + 50 * price_2 + 100 * price_3 + (electricity_consumed - 200) * price_4;
            }

    switch(customer_type){
        case 1:
            total_bill = bill + surcharge_1 * bill;
            printf("So tien dien phai tra la: %.2f VND", total_bill);
            break;
        case 2:
            total_bill = bill + surcharge_2 * bill;
            printf("So tien dien phai tra la: %.2f VND", total_bill);
            break;
        case 3:
            total_bill = bill + surcharge_2 * bill;
            printf("So tien dien phai tra la: %.2f VND", total_bill);
            break;
        default:
            printf("Loai khach hang khong hop le");
    }

}