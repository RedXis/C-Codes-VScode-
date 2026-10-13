#include <stdio.h>
 int main(void) {
    
    
    char lettere = 'e';
    char letter = lettere + 1;
    printf("%c\n", letter);

    char c1 = 'a';
    char c2 = c1 +1;
    printf("%c\n", c2);

   double d= 1/2;
   printf("%f\n", d);

   d= 1.0/2; // In questo caso, il risultato sarà 0.5, poiché 1.0 è un double e la divisione tra un double e un int restituisce un double.
   printf("%f\n", d);

   d= 1/(double)2; 
   printf("%f\n", d);
    

   int x= 5;
   int y= 2;
   int z= x % y;
   printf("%d", z);

   return 0;
 }