#include <stdio.h>

//22. Leer un número entero y determinar cuántas veces tiene el dígito 1.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int contar_dig_uno(int numero){
    int digito =0;
    int contador =0;

    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;
        if (digito == 1)
        {
            contador ++;
        }
    }
    return contador;
}

int main(){
    int numero = pedir_numero();
    int suma = contar_dig_uno(numero);
    printf("El numero: %d tiene %d digitos 1,", numero, suma );
}