#include <stdio.h>
#include <math.h>



int main() {
    int sayi;

    printf("Bir sayı giriniz: ");
    scanf("%i", &sayi);




    for(int i = 0; i < sayi; i++) {
        if(i == 0 || i == 1) continue;

        if(i == sayi) {
            printf("%i sayısı asal.", sayi);
            break;
        }

        if(sayi%i == 0) {
            printf("%i sayısı %i sayısına bölünür bu yüzden asal değildir", sayi, i);
            break;
        }


    }
    return 0;
}


