#include <stdio.h>

int main() {
    float mesafe, dakika;
    printf("Mesafeyi cm cinsinden giriniz: ");
    scanf("%f",&mesafe);

    printf("Varış süresini dakika cinsinden giriniz: ");
    scanf("%f",&dakika);


    printf("Gidilmesi gerekilen hız: %.2fcm/dk", mesafe/dakika);
    return 0;
}
