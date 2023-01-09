#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {






    char cumle[255];
    printf("Bir cümle girin: ");
    scanf("%[^\n]", cumle);

    int length = strlen(cumle);

    for (int i = 0; i < length; ++i) {
        cumle[i] = toupper(cumle[i]);
    }

    printf("Verilen cümlede kelimelerin düzenlenmiş hali: %s", cumle);





    return 0;
}


