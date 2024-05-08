#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void absolute(int x, int *y) {
    if(x>= 0){
    // Completar aquí
        *y = x;
       }else{
       *y = -x;
       }
}


int main(void) {
    int a=-10, res=0;  // No modificar esta declaración
      // no se deben declarar variables nuevas
    // Completar aquí
    absolute(a,&res);
    //
    printf("%u\n",res);
    assert(res >= 0 && (res == a || res == -a));
    return EXIT_SUCCESS;
}

