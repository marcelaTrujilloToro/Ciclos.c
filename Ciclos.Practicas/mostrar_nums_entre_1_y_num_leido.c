#include <stdio.h>

//1 Leer un número entero y mostrar todos los enteros comprendidos entre 1 y el número leído.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

void mostrar_numeros(int numero){
    
    for (int i = 2; i < numero; i++)
    {
        printf("%d ", i);
    }    
}

int main(){
    int numero = 0;
    numero = pedir_numero();
    mostrar_numeros(numero);
}