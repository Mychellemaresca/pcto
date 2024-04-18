#include <stdio.h>


int main()
{
    int porta;
    int portagiusta=2;
    
    char nome[20];
    printf("ciao, inserisci il tuo nome");
    scanf("%s", nome);

    printf("ciao ,%s, iniziamo a giocare!\n", nome);

    printf("entri in una locanda e all'interno di qusta trovi tre porte, scegli in quale delle tre entrare tra 1, 2 o 3");
    scanf("%d", &porta);
    if (porta==portagiusta) {
        printf("Bravo");
    }

    else {
        printf("sbagliato, sei finito in una stanza che va a fuoco, torna indietro e riprova");
    }


    
}