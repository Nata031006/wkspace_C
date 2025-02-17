#include <stdio.h>

void mein(){
    tabla5();
}

void tabla5(){
    int tabla = 4;
    int prod = 0;
    short int contador = 1;
    prod = tabla * contador;
    printf("%d * %d = %D",tabla, contador, prod);
    contador = contador + 1;
    prod = tabla * contador;
    printf("%d * %d = %d\n",tabla,contador,prod);
}
