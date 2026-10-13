#include <stdio.h>

int main(void){
    int x;
    int y;
    int z;
    printf("Inserisci i numeri x y e z:");

    scanf("%d", &x);
        scanf("%d", &y);
            scanf("%d", &z);


     if(x>y & x>z){ 
        printf("%d è il numero piu grande\n",x);

     } else if (y>x & y>z){
        printf("%d è il nuemro piu grande\n", y);

     }else{
        printf("%d è il numero più grande\n", z);

     }

    return 0;
}