#include <stdio.h>

int main() {
    int yas;
    printf("Kişinin yaşını giriniz: ");
    scanf("%i",&yas);




    printf("Girdiğiniz kişi oy %s",((yas >= 18)?"verebilir":"veremez"));
    return 0;
}
