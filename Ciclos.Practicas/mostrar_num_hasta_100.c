#include <stdio.h>

//7. Mostrar en pantalla todos los enteros comprendidos entre 1 y 100.

void mostrar_numeros(){
    int i = 2;
    while (i < 100 )
    {
        printf("\n %d", i);
        i++;
    }

}

int main(){
    mostrar_numeros();
    return 0;
}