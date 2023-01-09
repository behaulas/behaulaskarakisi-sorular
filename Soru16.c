#include <stdio.h>


char* gunler[] = {"Pazartesi", "Salı","Çarşamba","Perşembe", "Cuma", "Cumartesi", "Pazar"};
int main() {
    int num;
    printf("Gün numarasını girin: ");
    scanf("%i",&num);





    printf("Gün: %s",gunler[num-1]);
    return 0;
}
