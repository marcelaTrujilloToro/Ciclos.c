#include <stdio.h>

//3. Leer un número entero y mostrar todos los divisores exactos del número comprendidos entre 1 y el número leído.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}


void mostrar_numeros(int numero){
    
    for (int i = 1; i <= numero; i++){
        if(numero % i == 0){
        printf("%d ", i);
        }        
    }
}

int main(){
    int numero = 0;
    numero = pedir_numero();
    mostrar_numeros(numero);
}