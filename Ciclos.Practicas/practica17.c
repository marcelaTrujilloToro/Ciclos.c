#include <stdio.h>

//Promediar los x primeros múltiplos de 2 y determinar si ese promedio es mayor que los y
//primeros múltiplos de 5 para valores de x y y leídos.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int sumar_multiplos(int numero, int multiplo){

    int suma=0;
    int i = 1;    
    int contador =0;
    while (contador <numero){      
        if(i % multiplo == 0){
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
    int num1 = pedir_numero();
    int num2 = pedir_numero();
    printf("\nLos primeros %d multiplos de 2 son: ", num1); 
    int suma_multiplos_2 = sumar_multiplos(num1, 2);
    printf("\nLos primeros %d multiplos de 5 son: ", num2);
    int suma_multiplos_5 = sumar_multiplos(num2, 5);
    float promedio1 = promediar(num1, suma_multiplos_2);
    float promedio2 = promediar(num2, suma_multiplos_5);

    if (promedio1 < promedio2){
        printf(" \n El promedio de los multiplos de 5 es mayor que el promedio de los multiplos de 2:  %.2f > %.2f", promedio2, promedio1);

    }else
    {
        printf("\n El promedio de los multiplos de 2 es mayor que el promedio de los multiplos de 5:  %.2f > %.2f", promedio1, promedio2);
    }
    

}