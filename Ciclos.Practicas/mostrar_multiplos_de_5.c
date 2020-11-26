#include <stdio.h>

//13. Leer un entero y mostrar todos los múltiplos de 5 comprendidos entre 1 y el número leído.


int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

void mostrar_numeros(int numero){
    
    for (int i = 1; i <= numero; i++){
        if(i % 5 == 0){
        printf("%d ", i);
        }        
    }
}

int main(){
    int numero = pedir_numero();
    mostrar_numeros(numero);
}