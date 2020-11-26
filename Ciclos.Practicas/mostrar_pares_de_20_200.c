#include <stdio.h>

//8. Mostrar en pantalla todos los pares comprendidos entre 20 y 200.

void definir_par(int numero){
    if(numero % 2 == 0){
        printf("\n %d", numero);
    }
    
}

void mostrar_numero(){
    int i= 21;
    while (i < 200)
    {
        definir_par(i);
        i++;
    }
    
}

int main(){
    mostrar_numero();
    return 0;
}