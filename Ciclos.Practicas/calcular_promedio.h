#include <stdio.h>

//31. Leer números hasta que digiten 0 y determinar a cuánto es igual el promedio de los números terminados en 5.

void mostrar_promedio_terminados_en_5(){
    int num;
    float contador = 0;
    int suma = 0;
    
    do{
        
        printf("Escriba un numero:\n");        
        scanf("%d", &num); 

        if (num % 10 ==5){
            suma = suma + num; 
            contador ++;       
        }
        

    } while (num == 0); 

    float promedio =0;
    promedio = suma/contador;
    printf("El promedio de los numeros terminados en 5 es: %.2f %.2f %d", promedio, contador, suma);
}




