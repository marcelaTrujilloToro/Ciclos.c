#include <stdio.h>

//24. Leer un número entero y determinar a cuánto es igual al suma de sus dígitos pares.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int  determinar_pares(int num){
    int suma=0;
    if (num %2 == 0)
    {
        suma = suma + num;
    }
    return suma; 
}

int sumar_digitos(int numero){
    int digito =0;
    int suma=0;
    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;
        suma = suma + determinar_pares(digito);
    }
    return suma; 
    
}

int main(){
    int numero = pedir_numero();
    int suma = sumar_digitos(numero);
    printf("La suma de los digitos pares es: %d", suma );

}