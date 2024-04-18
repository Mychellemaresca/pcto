#include <stdio.h>

int main()
{
    int anno;
    printf("inserisci anno");
    scanf("%d", &anno);
    if((anno%4==0&&anno%100!=0)||anno%400==0){
    printf("l'anno è bisestile");
    }
    else{
        printf("l'anno non è bisestile");
    }
    
}