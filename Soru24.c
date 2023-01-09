#include <stdio.h>
#include <math.h>



int main() {

    printf("1 den 50 ye ek sayılar: \n");
    for (int i = 1; i <= 50; ++i) {
        if(i % 2 == 1)
            printf("%i bir tek sayıdır\n", i);
        else if(i == 0)
            printf("%i bir doğal sayıdır\n", i);
        else
            printf("%i bir çift sayıdır\n", i);
    }






    return 0;
}


