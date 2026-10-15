#include <stdio.h>
int main (void){

 /*

 int x;
 int y;
  printf("Inserisci dei numeri naturali");
 int input_read = scanf("%d %d", &x, &y);      //Va anche bene scriverlo in questo modo.
 if(input_read !=2){      //Diverso da due perchè i numeri naturali sono 2. Se proviamo a mettere un R risulta essere solo 1 N.
    printf("Hai inserito dei numeri non naturali");
 }else{
    printf("Hai inserito dei numeri naturali");
 }

 */


 int x;
  printf("Inserisci un numero pari da 0 a 10 compresi\n");
 int numero_pari= scanf("%d", &x);
 if(x % 2 !=0){
    printf("Valore inserito errato\n");
 } else{
 switch(x) { //Attenzione. Non si mettono ne calcoli ne variabili.
   case 0:
    printf("Il numero che hai inserito è pari ed è 0\n");
   break;
    case 2:
     printf("Il numero che hai inserito è pari ed è 2\n");
     break;
      case 4:
       printf("Il numero che hai inserito è pari ed è 4\n");
      break;
       case 6:
        printf("Il numero che hai inserito è pari ed è 6\n");
       break;
        case 8:
         printf("Il numero che hai inserito è pari ed è 8\n");
        break;
         case 10:
          printf("Il numero che hai inserito è pari ed è 10\n");
         break;

     default:
      printf("Il numero che hai inserito è dispari che è %d\n", x);
     break;
  
  } 
 }

    return 0;
}