#include <stdio.h>

//27. Leer 2 números enteros y determinar cuál de los dos tiene mayor cantidad de dígitos.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int contar_digitos(int numero){
   int contador =0;
   int digito=0;

    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;

        contador ++;       
    }
    return contador;   
}

void determinar_mayor(int num1, int num2){
    if (num1 < num2)
    {
        printf("El segundo numero tiene mas digitos que el primero ");
    }else
    {
        printf("El primer numero tiene mas digitos que el segundo ");
    }
    
    
}

int main(){
    int num1 = pedir_numero();
    int cont1 = contar_digitos(num1);
    int num2 = pedir_numero();
    int cont2 = contar_digitos(num2);
    determinar_mayor(num1, num2);
}