#include <stdio.h>

int main(){
    int water_consumed;
    float bill;
    printf("Nhap luong nuoc tieu thu (m3): ");
    scanf("%d",&water_consumed);

    if(water_consumed < 0){
        printf("Luong nuoc tieu thu khong hop le");
        return 1;
    }
    else if(water_consumed <= 10){
        bill = water_consumed * 6000;
    }
    else if(11<= water_consumed && water_consumed <= 20){
        bill = 10 * 6000 + (water_consumed - 10) * 7000;
    }
    else if (21 <= water_consumed && water_consumed <=30){
        bill = 10 * 6000 + 10 * 7000 + (water_consumed - 20) * 8500;
    }
    else{
        bill = 10 * 6000 + 10 * 7000 + 10 * 8500 + (water_consumed - 30) * 10000;
    }

    printf("So tien phai tra: %.2f VND",bill);
}