#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {






    char cumle[255];
    printf("Bir cümle girin: ");
    scanf("%[^\n]", cumle);

    int length = strlen(cumle);
    cumle[0] = toupper(cumle[0]);

    for (int i = 0; i < length-1; ++i) {
        if(cumle[i] == ' ') cumle[i+1] = toupper(cumle[i+1]);
    }

    printf("Verilen cümlede kelimelerin ilk harfi düzenlenmiş hali: %s", cumle);





    return 0;
}


