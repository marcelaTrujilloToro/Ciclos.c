#include <stdio.h>

void calcular_promedio(){
    float total =0;
    int count =0;
    int n = 2;
    float valor ;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f", &valor);
        
        total = total + valor; 
        count ++; 
    }
    float promedio = total / count;
    printf("El promedio es %f ", promedio);
}


