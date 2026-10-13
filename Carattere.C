#include <stdio.h>
int main(void) {
   
    char letter='B'; 
    letter= letter + ( 'b'-'B');
    //letter= letter - ( 'B'-'b'); un altro metodo per convertire in Maiuscolo
    printf("Il carattere in minuscolo è: %c\n", letter);
  
    int distanza= letter - 'A';
    char finale = 'A' + distanza;
    printf("Il carattere in minuscolo è: %c\n", finale);
    return 0;
  
}