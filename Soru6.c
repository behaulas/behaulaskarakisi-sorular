#include <stdio.h>
#include <math.h>

int main() {
    float r;
    printf("Yarıçapı cm cinsinden giriniz: ");
    scanf("%f",&r);




    printf("Girdiğiniz çemberin çevresi: %.2fcm alanı: %.2fcm", 2*M_PI*r, M_PI*(r*r));
    return 0;
}
