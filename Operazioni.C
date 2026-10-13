#include <stdio.h> //Include la libreria standard di input/output

int main(void) {
    int x = 4;
    int y = 3;
    int z = (x + y)*10 -x;
    printf("Il risultato dell'operazione è: %d\n", z);
   
    int x = 3;
    int y = 2;
    double w=0; // Dichiarazione della variabile w di tipo double e inizializzazione a 0
    w= x/y; // Assegnazione del risultato della divisione di x per y alla variabile w. In questo caso, il risultato sarà 1.0, poiché x e y sono entrambi interi e la divisione tra interi restituisce un intero.
    printf("%f", w);

return 0;
}