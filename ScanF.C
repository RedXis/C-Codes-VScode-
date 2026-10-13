#include <stdio.h>

int main(void) {

int x; 
 printf ("Inserisci il tuo numero: "); 
 scanf("%d", &x);
 printf("Hai inserito il numero: %d\n", x);

double y;
 printf("Inserisci la temperatura corporea: ");  // Chiede all'utente di inserire la temperatura corporea
 scanf("%lf", &y); // Legge la temperatura corporea inserita dall'utente e la memorizza nella variabile y
 printf("La tua temperatura corporea è: %lf\n", y); // Stampa la temperatura corporea inserita dall'utente

int z;
int k;
printf("Inserisci due numeri: ");
scanf("%d %d", &z, &k);
printf("Hai inserito i numeri: %d e %d\n", z, k);
return 0;
}   