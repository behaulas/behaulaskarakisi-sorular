#include <stdio.h>

int main() {
    float ukenar, kkenar;
    printf("Uzun kenar uzunluğunu cm cinsinden giriniz: ");
    scanf("%f",&ukenar);

    printf("Kısa kenar uzunluğunu cm cinsinden giriniz: ");
    scanf("%f",&kkenar);


    printf("Girdiğiniz dikdörtgenin çevresi: %.2fcm alanı: %.2fcm", (ukenar*2)+(kkenar*2), ukenar*kkenar);
    return 0;
}
