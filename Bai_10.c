#include <stdio.h>

int main(){
    float electricity_consumed, bill, surcharge, total_bill;
    int customer_type;
    printf("Nhap so dien tieu thu cua ca thang (kWh): ");
    scanf("%f",&electricity_consumed);
    printf("Nhap loai khach hang (1- Gia dinh, 2- Kinh doanh, 3- San xuat): ");
    scanf("%d",&customer_type);

    if(electricity_consumed < 0){
        printf("So dien tieu thu khong hop le");
        return 1;
    }

    switch(customer_type){
        case 1:
            if(electricity_consumed <= 50){
                bill = electricity_consumed * 1500;
            }
            else if(51 <= electricity_consumed && electricity_consumed <= 100){
                bill = 50 * 1500 + (electricity_consumed - 50) * 2000;
            }
            else if(101 <= electricity_consumed && electricity_consumed <= 200){
                bill = 50 * 1500 + 50 * 2000 + (electricity_consumed - 100) * 2500;
            }
            else{
                bill = 50 * 1500 + 50 * 2000 + 100 * 2500 + (electricity_consumed - 200) * 3000;
            }
            surcharge = bill * 0.05;
            total_bill = bill + surcharge;
            printf("So tien dien phai tra la: %.2f VND", total_bill);
            break;
        case 2:
            if(electricity_consumed <= 50){
                bill = electricity_consumed * 1500;
            }
            else if(51 <= electricity_consumed && electricity_consumed <= 100){
                bill = 50 * 1500 + (electricity_consumed - 50) * 2000;
            }
            else if(101 <= electricity_consumed && electricity_consumed <= 200){
                bill = 50 * 1500 + 50 * 2000 + (electricity_consumed - 100) * 2500;
            }
            else{
                bill = 50 * 1500 + 50 * 2000 + 100 * 2500 + (electricity_consumed - 200) * 3000;
            }
            surcharge = bill * 0.1;
            total_bill = bill + surcharge;
            printf("So tien dien phai tra la: %.2f VND", total_bill);
            break;
        case 3:
            if(electricity_consumed <= 50){
                bill = electricity_consumed * 1500;
            }
            else if(51 <= electricity_consumed && electricity_consumed <= 100){
                bill = 50 * 1500 + (electricity_consumed - 50) * 2000;
            }
            else if(101 <= electricity_consumed && electricity_consumed <= 200){
                bill = 50 * 1500 + 50 * 2000 + (electricity_consumed - 100) * 2500;
            }
            else{
                bill = 50 * 1500 + 50 * 2000 + 100 * 2500 + (electricity_consumed - 200) * 3000;
            }
            surcharge = bill * 0.08;
            total_bill = bill + surcharge;
            printf("So tien dien phai tra la: %.2f VND", total_bill);
            break;
        default:
            printf("Loai khach hang khong hop le");
    }

}