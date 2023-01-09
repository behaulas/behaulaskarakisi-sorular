#include <stdio.h>
#include <string.h>

int bolenBul(int sayi) {
    for (int i = 2; i < sayi; ++i) {
        if(sayi % i == 0) return i;
    }
    return 0;
}

int main() {






    while(1) {
        int sayi;
        printf("Bir sayı giriniz: ");
        scanf("%i",&sayi);

        if(bolenBul(sayi) == 0) printf("Girmiş olduğunuz sayı bir asal sayıdır\n");
        else printf("Girmiş olduğunuz sayı asal bir sayı değildir\n");
    }






    return 0;
}


