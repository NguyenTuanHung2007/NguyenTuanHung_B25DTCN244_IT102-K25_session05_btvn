#include <stdio.h>

int main(){
    float a, b;
    char operator;
    printf("Nhap so thuc a: ");
    scanf("%f", &a);
    printf("Nhap so thuc b: ");
    scanf("%f", &b);
    printf("Nhap phep toan (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
            printf("Ket qua: %.2f", a + b);
            break;
        case '-':
            printf("Ket qua: %.2f", a - b);
            break;
        case '*':
            printf("Ket qua: %.2f", a * b);
            break;
        case '/':
            if(b != 0){
                printf("Ket qua: %.2f", a / b);
            }
            else {
                printf("Loi: Khong the chia cho 0");
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le");
    }
    
}