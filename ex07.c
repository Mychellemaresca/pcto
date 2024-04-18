#include <stdio.h>

int main()
{
float numero1;
float numero2;
printf("inserisci due numeri\n");
scanf("%f", &numero1);
scanf("%f", &numero2);
if(numero2<numero1) {
    printf("il numero %f è maggiore del numero %f" ,numero1,numero2)
}

}