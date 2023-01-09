#include <stdio.h>

int main() {
    int yil;
    printf("Yil giriniz: ");
    scanf("%i",&yil);




    printf("%i yılı %s",yil,((yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0))?"artık yıldır":"artık yıl değildir"));
    return 0;
}
