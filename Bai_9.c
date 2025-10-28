#include <stdio.h>

int main(){
    float salary_coefficient, salary, bonus;
    const float allowance_1 = 500000;
    const float allowance_2 = 1000000;
    const float allowance_3 = 2000000;
    const float earn_per_day = 160000;
    int work_days, occupation;
    printf("Nhap he so luong: ");
    scanf("%f",&salary_coefficient);
    printf("Nhap so ngay lam viec trong thang: ");
    scanf("%d",&work_days);
    printf("Nhap ma nganh nghe (1- Nhan vien, 2- To truong, 3- Quan ly): ");
    scanf("%d",&occupation);

    if(work_days < 0 && work_days > 31){
        printf("So ngay lam viec khong hop le");
        return 1;
    }
    if (salary_coefficient <= 0){
        printf("He so luong khong hop le");
        return 1;
    }
    if(work_days > 26){
        bonus = (work_days - 26) * 200000;
        salary = work_days * earn_per_day * salary_coefficient + allowance_1 + bonus;
    }
    else{
        salary = work_days * earn_per_day * salary_coefficient + allowance_1;
    }

    switch(occupation){
        case 1:
            printf("So tien luong la: %.2f", salary);
            break;
        case 2:
            printf("So tien luong la: %.2f", salary);
            break;
        case 3:
            printf("So tien luong la: %.2f", salary);
            break;
        default:
            printf("Ma nganh nghe khong hop le");
    }

}