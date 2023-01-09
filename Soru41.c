#include <stdio.h>
#include <string.h>



int main() {







    float toplamKilo = 0;
    float toplamBoy = 0;
    for (int i = 0; i < 5; ++i) {
        printf("%i. öğrencinin boyunu m cinsinden girin: ", i+1);
        float t;
        scanf("%f",&t);

        toplamBoy += t;

        printf("%i. öğrencinin kilosunu kg cinsinden girin: ", i+1);
        scanf("%f",&t);

        toplamKilo += t;
    }

    printf("5 öğrencinin boylarının ortalaması: %.2fm kilolarının ortalaması: %.2fkg dır", toplamBoy/5, toplamKilo/5);


    return 0;
}


