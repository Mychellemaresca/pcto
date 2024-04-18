#include <stdio.h>

int main()
{
float numero1;
float numero2;
printf("inserisci due numeri\n");
scanf("%f",&numero1);
scanf("%f",&numero2);
float somma = numero1+numero2;
printf("%f+%f=%f",numero1,numero2,somma);
float sottrazione = numero1- numero2;
printf("%f-%f=%f" ,numero1, numero2,sottrazione);

}