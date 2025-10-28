#include <stdio.h>

int main(){
    float a,b;
    printf("Nhap so thuc a: ");
    scanf("%f",&a);
    printf("Nhap so thuc b: ");
    scanf("%f",&b);
    float x = -b/a;

    if(a == 0){
        if (b == 0){
            printf("Phuong trinh vo so nghiem");
        }
        else{
            printf("Phuong trinh vo nghiem");
        }
    }
    else{
        printf("Phuong trinh co nghiem x = %.2f",x);
    }

}