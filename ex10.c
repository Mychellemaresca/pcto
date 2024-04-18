#include <stdio.h>

int main()
{
    int numero;
    int numero2;
printf("inserisci 2 numeri\n");
scanf("%d", &numero);
scanf("%d", &numero2);
if(numero%numero2==0){
printf("il primo numero è multiplo del secondo\n ");
}
else{
printf("non è multiplo\n");
}
}