#include <stdio.h>
#include <string.h>



int main() {



    int ogrenciSayisi;

    printf("Kaç öğrenciniz bulunmakta: ");
    scanf("%i",&ogrenciSayisi);



    int toplam = 0;
    for (int i = 0; i < ogrenciSayisi; ++i) {
        printf("%i. öğrencinin notunu girin: ", i+1);
        int t;
        scanf("%i",&t);

        toplam += t;
    }

    printf("%i öğrencinin notlarının toplamı: %i ortalaması: %.2f dir", ogrenciSayisi, toplam, (float)toplam/ogrenciSayisi);


    return 0;
}


