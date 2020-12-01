#include <stdio.h>

//Leer un número entero y determinar cuántos dígitos tiene.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int contar_digitos(int numero){
    int digito =0;
    int contador =0;
    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;
        contador ++;
    }
    return contador;
}

int main(){
    int numero = pedir_numero();
    int digitos = contar_digitos(numero);
    printf("el numero: %d tiene: %d digitos", numero, digitos);
}