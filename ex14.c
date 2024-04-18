#include <stdio.h>

int main()
{
float num1;
float num2;
float num3;
printf("inserisci 3 numeri");
scanf("%f",&num1);
scanf("%f",&num2);
scanf("%f",&num3);

if(num1+num2>num3 && num2+num3>num1 && num1+num3>num2){
    printf("può essere un triangolo"); 
}
 

else { 
    printf("puo essere un triangolo");
}
    
}