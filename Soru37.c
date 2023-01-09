#include <stdio.h>
#include <limits.h>



int main() {

    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for (int i = 0; i < 10; ++i) {
        printf("Bir sayı giriniz: ");
        int t;
        scanf("%i",&t);

        if(minValue > t) minValue = t;
        if(maxValue < t) maxValue = t;


    }

    printf("Girmiş olduğunuz sayılardan en büyüğü: %i en küçüğü ise: %i dir", maxValue, minValue);



    return 0;
}


