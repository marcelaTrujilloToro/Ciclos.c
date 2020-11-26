#include <stdio.h>
/* 16. Mostrar en pantalla el promedio entero de los n primeros múltiplos de 3 para un número n leído. */

int suma = 0;
int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int sumar_multiplos(int numero){
    int contador =0;
    int i=1;
    
   
   while (contador <numero)
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
float promediar(int cantidad, int suma){
    float promedio= 0;
    promedio = suma / cantidad;
    return promedio;
}


int main(){   
    int numero = pedir_numero();
    int suma =  sumar_multiplos(numero);
    float promedio = promediar(numero, suma);
    printf("\n El promedio de los primeros %d  multiplos de 3 es: %.2f \n",numero, promedio);
}