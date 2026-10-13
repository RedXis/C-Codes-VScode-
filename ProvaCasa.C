#include <stdio.h>
#define MAX 2
#define TEMP 36.5f

int main (void){

    int x;
    double y;
    printf("Inserisci la tua età: \n");
    scanf("%d", &x);
    printf("Inserisci quanto vale pigreco: \n");
    scanf("%lf", &y);
    printf("La tua età è %d e hai messo come valore pigreco: %lf \n", x,y);
    printf("La tua temperatura è %lf\n", TEMP);


    char lettera = 'A';
    printf("La sua lettera minuscola sarebbe %c\n", lettera+32);
    return 0;

}