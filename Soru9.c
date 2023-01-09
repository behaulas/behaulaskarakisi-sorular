#include <stdio.h>

int main() {
    int sayi;
    printf("Bir sayı giriniz: ");
    scanf("%i",&sayi);




    printf("%i sayısı %s",sayi,((sayi > 0)?"pozitiftir":sayi==0?"sıfırdır":"negatiftir"));
    return 0;
}
