#include <stdio.h>

int main(){
    char c;
    printf("Nhap ky tu: ");
    scanf("%c",&c);

    if(c >= 'A' && c <= 'Z'){
        char lower = c + 32;
        printf("Ky tu vua nhap nhap doi sang chu in thuong la: %c", lower);
    }
    else if(c >= 'a' && c <= 'z'){
        char upper = c - 32;
        printf("Ky tu vua nhap doi sang chu in hoa la: %c", upper);
    }
    else{
        printf("Khong phai chu cai");
    }
    
}