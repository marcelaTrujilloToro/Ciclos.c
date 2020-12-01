#include <stdio.h>

//29. Leer un número entero y determinar a cuánto es igual el primero de sus dígitos.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int sacar_primer_digito(int numero){

    int digito = 0;
    while (numero != 0)
    {
        digito = numero % 10;
        numero = numero / 10;
    }    

    return digito;

}

int main(){
    int num = pedir_numero();
    int primer_dig = sacar_primer_digito(num);
    printf("El primer digito del numero: %d es: %d", num, primer_dig);
}