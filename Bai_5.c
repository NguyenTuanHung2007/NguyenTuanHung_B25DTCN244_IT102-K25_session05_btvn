#include <stdio.h>

int main(){
    int age, busTicketPrice = 20000, price;
    printf("Nhap tuoi cua ban: ");
    scanf("%d",&age);

    if(age < 0){
        printf("Tuoi khong hop le");
        return 1;
    }
    else if(age < 6){
        price = busTicketPrice * 0;
    }
    else if(age >= 6 && age <= 18){
        price = busTicketPrice * 0.5;
    }
    else if(age > 18 && age <= 60){
        price = busTicketPrice * 1;
    }
    else{
        price = busTicketPrice * 0.7;
    }
    printf("So tien ve : %d VND",price);
}