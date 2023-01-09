#include <stdio.h>
#include <math.h>

float alanBul(float yaricap) {
    return M_PI*yaricap*yaricap;
}
float cevreBul(float yaricap) {
    return M_PI*2*yaricap;
}

int main() {






    float yariCap;

    printf("Dairenin yarıçapını giriniz: ");
    scanf("%f", &yariCap);

    printf("Girdiğiniz dairenin alanı %.2f çapı ise %.2f", alanBul(yariCap), cevreBul(yariCap));




    return 0;
}


