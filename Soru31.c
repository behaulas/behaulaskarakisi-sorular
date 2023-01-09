#include <stdio.h>



int main() {

    int sayi;

    do {
        printf("Bir sayı giriniz: ");
        scanf("%i", &sayi);

        printf("Girdiğiniz sayı: %i\n", sayi);

    } while(sayi >= 0);







    return 0;
}


