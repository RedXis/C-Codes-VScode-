// Un programma che mostra come stampare in C
// Il primo di tanti programmi in C che vedrette

#include <stdio.h> //Include la libreria standard di input/output

int main()
{ // Inizio del programma

    // Dichiara una variabile
    int my_age;

    // Inizializza la variabile
    my_age = 21;

    // Dichiara e inizializza una variabile
    int my_age2 = 21;        // Dichiara e inizializza una variabile di tipo int
    char lettere = 'A';      // Dichiara e inizializza una variabile di tipo char
    double number = 3.14159; // Dichiara e inizializza una variabile di tipo double
    float number2 = 3.14;    // Dichiara e inizializza una variabile di tipo float
    // Prova temperatura float
    float temperature = 36.5f; // Si puo mettere anche F in caso di temperature. Serve per indicare che il numero è un float e non un double.
    int age = 10;
    int x;
    double y;

    // Stampa il valore della variabile
    printf("Hello, World!\n");
    printf("This is a Backslash \\ ");
    printf("This is a Backslash followed by a newline \\\n ");
    printf("\"\\\\\" and \"\\n\"\n"); // \ Non puo essere singolo. Verrà eliminato e non verrà stampato. Per stampare un backslash bisogna scrivere due backslash. Per stampare una nuova riga bisogna scrivere \n
    printf("Il mio compleanno è il %d\n", my_age2);
    
    return 0;
} 