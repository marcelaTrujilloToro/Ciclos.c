#include <stdio.h>
//15. Escribir en pantalla el resultado de sumar los primeros 20 múltiplos de 3.


int sumar_multiplos(){
    int contador =0;
    int i=1;
    int suma = 0;
   while (contador <20)
   {      
        if(i % 3 == 0){
            printf("%d ", i);            
            contador++;
            suma = suma +i;
        }        
        i++;        
    }
    return suma;
}

int main(){   
    int suma =  sumar_multiplos();
    printf("\n La suma de los multiplos de 3 es: %d \n", suma);
}