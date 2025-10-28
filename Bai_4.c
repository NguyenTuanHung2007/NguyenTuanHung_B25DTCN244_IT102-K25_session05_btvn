#include <stdio.h>

int main(){
    float income, tax;
    printf("Nhap thu nhap cua ban theo don vi trieu dong: ");
    scanf("%f",&income);

    if(income <= 5){
        tax = income * 0.05;
    }
    else if(5 < income && income <= 10){
        tax = income * 0.1;
    }
    else{
        tax = income * 0.15;
    }

    printf("So tien thue phai nop la: %.2f trieu dong",tax);
}