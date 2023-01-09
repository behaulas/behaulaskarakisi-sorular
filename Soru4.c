#include <stdio.h>

int main() {
    float kenar;
    printf("Kenar uzunluğunu cm cinsinden giriniz: ");
    scanf("%f",&kenar);




    printf("Girdiğiniz karenin çevresi: %.2fcm alanı: %.2fcm", kenar*4, kenar*kenar);
    return 0;
}
