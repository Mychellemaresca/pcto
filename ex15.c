#include <stdio.h>

int main()
{
    int anno;
    printf("inserici anno di nascita");
    scanf(" %d", &anno);
    if(anno==1969){
    printf(" è l'anno in cui l'uomo è arrivato sulla luna");

    }
    else if(anno<1969){
    printf("l'uomo è arrivato sulla luna %d anni dopo della tua nascita", 1969-anno);   
    }
    else if (anno>1969){
        printf("l'uomo è arrivato sulla luna %d anni prima della tua nascita", anno-1969);
    }
}