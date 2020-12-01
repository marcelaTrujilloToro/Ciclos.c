#include <stdio.h>

//19. Leer un número entero y determinar si es primo.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

void determinar_primos(int numero){
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
        printf("El numero es primo");
    }else
    {
        printf("El numero no es primo");
    }   
    
}

int main(){
    int numero = pedir_numero();
   determinar_primos(numero);    
}