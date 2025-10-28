#include <stdio.h>

int main(){
    float average_score;
    printf("Nhap diem trung binh: ");
    scanf("%f",&average_score);

    if (average_score >= 8.0){
        printf("Hoc luc: Gioi");
    }
    else if (average_score >= 6.5){
        printf("Hoc luc: Kha");
    }
    else if (average_score >= 5.0){
        printf("Hoc luc: Trung binh");
    }
    else{
        printf("Hoc luc: Yeu");
    }

}