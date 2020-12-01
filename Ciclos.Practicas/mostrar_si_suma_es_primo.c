#include <stdio.h>

//23. Leer un número entero y determinar si la suma de sus dígitos es también un número primo.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int sumar_digitos(int numero){
    int digito =0;
    int suma =0;

    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;
        suma = suma + digito;
    }
    return suma;
}

void determinar_si_num_es_primo(int numero){
    int contador =0; 
    for (int i = 1; i <= numero ; i++)
    {       
       
        if (numero % i == 0)
        {
             contador ++; 
        }              
    } 
    if (contador == 2 )
    {
        printf("La suma de los digitos es primo");
    }else
    {
        printf("La suma de los digitos no es primo");
    }   
    
}

int main(){
    int numero = pedir_numero();
    int suma = sumar_digitos(numero);
    determinar_si_num_es_primo(suma);    
}