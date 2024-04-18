#include <stdio.h>

int main()
{
    int etaminima;
    int eta;
    printf("inserisci a che eta si può prendere la patente\n");
    scanf("%d", &etaminima);

    printf("inserisci la tua eta\n");
    scanf(" %d", &eta);

    if (eta>=etaminima){
    printf("puoi prendere la patente\n");
    }
    else{
    printf("non puoi prendere la patente\n");
    }

    
}