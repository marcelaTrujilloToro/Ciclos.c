#include <stdio.h>


void calcular_promedio(int numero){
    
    float total =0;
    int count =0;
    float valor ;
    for (int i = 0; i < numero; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &valor);
        
        total = total + valor; 
        count ++; 
    }
    float promedio = total / count;
    printf("El promedio es %.2f ", promedio);
}


