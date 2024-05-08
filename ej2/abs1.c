#include <stdlib.h>
#include <stdio.h>

void absolute(int x, int y) {
    if(x>= 0){
    // Completar aquí
        y = x;
       }else{
       y = -x;
       }
}

int main(void) {
    int a=-10, res=0;
    //
    // Completar aquí
    absolute(a,res);
    //
    printf("%u\n",res);
    return EXIT_SUCCESS;
}
/*
  El main con el llamado absolute(a,res)
    imprimer por pantalla 0
  Si coincide con el lenguaje del teorico
  es un problea de punteros gatooo!!!!
*/
