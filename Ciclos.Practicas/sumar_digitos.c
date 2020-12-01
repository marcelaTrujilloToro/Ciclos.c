#include <stdio.h>

//21. Leer un número entero y determinar a cuánto es igual al suma de sus dígitos.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int sumar_digitos(int numero){
    int digito =0;
    int contador =0;
    int suma =0;

    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;
        contador ++;
        suma = suma + digito;
    }
    return suma;
}

int main(){
    int numero = pedir_numero();
    int suma = sumar_digitos(numero);
    printf("La suma de los digitos es: %d", suma);
}