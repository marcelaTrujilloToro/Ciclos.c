#include <stdio.h>

//10. Leer un número entero y determinar a cuánto es igual la suma de todos los enteros
//comprendidos entre 1 y el número leído.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int sumar(int numero){
    int suma=0;
    for (int i = 1; i <=numero; i++)
    {
        suma = suma + i;
    }
    return suma;
}

int main(){
    int numero = pedir_numero();
    int suma = sumar(numero);
    printf("La suma de los numero hasta: %d es : %d",numero, suma);
}