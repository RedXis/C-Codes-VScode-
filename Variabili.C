// Un programma che mostra come stampare in C
// Il primo di tanti programmi in C che vedrette

#include <stdio.h> //Include la libreria standard di input/output

int main() {

    // Dichiara e inizializza una variabile
    int my_age = 21;        // Dichiara e inizializza una variabile di tipo int
    char lettere = 'A';      // Dichiara e inizializza una variabile di tipo char
    double number = 3.14159; // Dichiara e inizializza una variabile di tipo double
    float number2 = 3.14;    // Dichiara e inizializza una variabile di tipo float
    
    float temperature = 36.5f; // Si puo mettere anche F in caso di temperature. Serve per indicare che il numero è un float e non un double.
    int age = 10;
    int x;
    double y;
  // Tutto ciò che ce scritto sopra sono le varabili che vengono dichiarate e inizializzate.
  // Ricordiamo che Int è INTERO, Char è CARATTERE, Double è con virgola, Float è FLOAT.

    // Stampa il valore della variabile
    printf("Il mio compleanno è il %d\n", my_age);
    printf("Il pigreco è %f\n", number);
    printf("Il mio nome inizia con %c\n", lettere);
    printf("La temperatura è %f\n", temperature);
  //Ricordarsi di mettere dopo il % il tipo di variabile che si vuole stampare. %d per int, %f per float e double, %c per char.

    printf("%.2lf\n", number); // Stampa il numero con 2 cifre decimali
    printf("%.4lf\n", number); // Stampa il numero con 4 cifre decimali
    printf("%.0lf\n", number); // Stampa il numero con 0 cifre decimali
    
    // ATT.


    return 0;
}