#include <stdio.h>

int main() {
    int num = 15; 
    int input;      

    
    do {
        printf("Nhap vao mot so tu 1 den 20: ");
        scanf("%d", &input);
        if (input != num) {
            printf("So ban nhap chua dung. Vui long thu lai.\n");
        }
    } while (input != num);  
    printf("Chuc mung. Ban da nhap dung so %d.\n", num);

    return 0;
}

