#include <stdio.h>

int n1 = 5;
int n2 = 10;

int suma();
int resta();
int multiplicacion();
float division();

void main(){
    printf("%d + %d = %d\n",suma());
    printf("%d - %d = %d\n",resta());
    printf("%d * %d = %d\n",multiplicacion());
    printf("%d / %d = %d\n",division());
}

int suma(){
    return n1 + n2;

}

int resta(){
    return n1 - n2;

}

int multiplicaion(){
    return n1 + n2;
}

float division(){
    return n1/(float)n2;
}