#include <stdio.h>
#include <math.h>

int topla(int sayi1, int sayi2) {
    return sayi2+sayi1;
}

float bol(float sayi1, float sayi2) {
    return sayi1/sayi2;
}

float nothesapla(float vize, float final) {
    float puan = (vize  * 0.4) + (final * 0.6);
    printf("Notunuz = %f\n", puan);


    if(puan > 60)
        printf("Dersi gectiniz");
    else if (puan > 50)
        printf("Dersi sorumlu gectiniz");
    else
        printf("Kaldiniz");
}

void donem(int kullaniciYasi)
{
    if(kullaniciYasi >= 0 && kullaniciYasi < 15) {
        printf("Cocuksunuz");
    } else if(kullaniciYasi >= 15 && kullaniciYasi < 30) {
        printf("Gencsiniz");
    } else if(kullaniciYasi >= 30 && kullaniciYasi < 55) {
        printf("Yetiskinsiniz");
    } else if(kullaniciYasi >= 55 && kullaniciYasi < 120) {
        printf("Yaslisiniz");
    } else {
        printf("Gecersiz");
    }
}



int main() {

    int us, taban;

    printf("Taban giriniz:");
    scanf("%d", &taban);
    printf("Us giriniz:");
    scanf("%d", &us);


    printf("%d uzeri %d = %d", taban, us, pow(taban, us));
}

int usal(int t, int u ) {
    int s = 1;

    for (int j = 0; j < u ; ++j) {
        s = s * t;
    }

    return s;
}
