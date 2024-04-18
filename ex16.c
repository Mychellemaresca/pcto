#include <stdio.h>

int main()
{    int numero;
    int a=2
    int b=0
    printf("inserisci un numero");
    scanf ("%d", &numero); 

    while (a != numero){
    if(numero%a==0){
        b=b+1;
    }      
    a=a+1
 }   }