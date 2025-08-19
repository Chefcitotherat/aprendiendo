#include <stdio.h>
int main(){

    int numero1;
    int numero2;
    int suma;
    printf("hola, escriba su primer numero:");
    scanf("%d", &numero1);

    printf("ahora escriba su segundo numero:");
    scanf(" %d", &numero2);

    suma = (numero1 + numero2)/2;

    printf("el resultado de la suma de sus numeros es: %d", suma);

    return 0;
}