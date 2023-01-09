#include <stdio.h>
#include <math.h>
int main() {
    float ilkX,ilkY, ikinciX, ikinciY;
    printf("İlk kordinatın xini giriniz: ");
    scanf("%f",&ilkX);

    printf("İlk kordinatın ysini giriniz: ");
    scanf("%f",&ilkY);

    printf("İkinci kordinatın xini giriniz: ");
    scanf("%f",&ikinciX);

    printf("İkinci kordinatın ysini giriniz: ");
    scanf("%f",&ikinciY);




    printf("(%.2f, %.2f) kordinatıyla (%.2f, %.2f) kordinatı arasındaki mesafe: %.2f",ilkX,ilkY,ikinciX,ikinciY,
           sqrt(powf(ilkX-ikinciX,2)+ powf(ilkY-ikinciY,2))

           );
    return 0;
}
