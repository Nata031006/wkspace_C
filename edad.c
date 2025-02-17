#include <stdio.h>
void imprimiredad1();
void imprimiredad2();

void main(){
    imprimiredad1();
    imprimiredad2();
}

void imprimiredad1(){
    int a_actual = 2025;
    int a_nacimiento = 1971;
    int edad = a_actual - a_nacimiento;
    printf("tienes %d años de edad\n");
}

void imprimiredad2(){
    int a_actual = 2025;
    int a_nacimiento = 2006;
    int edad = a_actual - a_nacimiento;
    printf("tienes %d años de edad\n");
}