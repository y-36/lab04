#include <stdlib.h>
#include <stdio.h>
#include <assert.h>




void swap(int *a, int *b){
     int aux;
     aux = *a;
     *a = *b;
     *b = aux;
     
}

int main (){
     int x, y; 
     x = 6;
     y = 4;
     printf("%d %d \n",x, y);
     swap(&x,&y);
     printf("%d %d \n",x, y);
     return 0;
}
