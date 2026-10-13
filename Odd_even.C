#include <stdio.h>  

int main (void){

  int numero = 0;
  scanf("%d", &numero);

  int resto = numero%2;

  if(resto == 0){
   printf("Pari\n");

  } else{

  printf("Dispari\n");
  }

  return 0;
}