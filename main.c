#include <stdio.h>

int main() {

    float base, altezza;

    printf("inserisci la base del triangolo: \n");
    scanf("%f", &base);

    printf("inserisci l'altezza del triangolo: \n");
    scanf("%f", &altezza);

    float area = (base * altezza) / 2;

    printf("l'area e' : %.2f", area);

    return 0;
}
