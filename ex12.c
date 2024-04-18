#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;
    printf("scegli tre numeri\n ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if(num3-num2==num2-num1){
    printf(" i numeri sono una successione aritmetica");

    } 
    else{
        printf(" i numeri non sono una successione\n");
    }
    
}