#include <stdio.h>

int main()
{
float celsius;
printf("inserisci temperatura in celsius\n");
scanf("%f", &celsius);
printf("la temperatura in kelvin è: %.2f\n", celsius+273.15);
printf("la temperatura fahrenheit è: %.2f \n", celsius*9/5+32);

if(celsius<-273.15){
 printf("la conversione è errata\n");  
}
}