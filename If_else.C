#include <stdio.h>

int main (void) {

    int x;
    int y;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &x);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &y);
// Il codice tra graffe esegue solo se la condizione è vera

    if (x >y) {
        printf(" Il numero %d è maggiore del numero %d\n", x,y);
        // codice da eseguire se la condizione è vera
    
    } else {
        printf("Il numero %d è maggiore del numero %d\n", y,x);
        // codice da eseguire se la condizione è falsa

    }
// Ricordiamo che 'A' e 'a' sono interi. Tutte le lettere con le virgolette sono interi, non char.
    return 0;
} 