#include <stdio.h>
#include <string.h>

int main() {



    int sayi, kalansayi, toplam = 0;

    printf("Bir sayı girin: ");
    scanf("%i", &sayi);
kalansayi = sayi;

    while(kalansayi != 0) {
        toplam += (kalansayi % 10);
        kalansayi /= 10;
    }

    printf("%i sayısının rakamlarının toplamı %d eder", sayi, toplam);

    return 0;
}
