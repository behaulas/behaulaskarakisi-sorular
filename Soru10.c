#include <stdio.h>

int main() {
    int sayi,sayi2;
    printf("Bir sayı giriniz: ");
    scanf("%i",&sayi);

    printf("Bir sayı daha giriniz: ");
    scanf("%i",&sayi2);




    printf("%i sayısı ikinci girdiğiniz %i %s",sayi,sayi2,((sayi > sayi2)?"sayısından büyüktür":sayi==sayi2?"sayısına eşittir":"sayısından küçüktür"));
    return 0;
}
