#include <stdio.h>

//Mostrar en pantalla todos los números terminados en 6 comprendidos entre 25 y 205.


void mostrar_numeros_ascendenmente(int numero, int numero2){

    while (numero <= numero2)
    {
        if(numero % 10 == 6){
            printf("%d ", numero,"\n");         
           
        }
        numero++;
    }
        
}

int main(){
    mostrar_numeros_ascendenmente(25, 205);
    
}