#include <stdio.h>



int main() {


    int values[5];
    for (int i = 0; i < 5; ++i) {
        printf("Bir sayı giriniz: ");
        int t;
        scanf("%i",&t);

        values[i] = t;


    }

    for (int i = 0; i < 5; i++) {
        for (int x = i+1; x < 5; x++) {
            if(values[i] > values[x]) {
                int valTemp = values[i];
                values[i] = values[x];
                values[x] = valTemp;
            }
        }
    }

    printf("Sayılar küçükten büyüğe şu şekildedir: ");
    for (int i = 0; i < 5; ++i) {
        printf("%i, ", values[i]);
    }



    return 0;
}


