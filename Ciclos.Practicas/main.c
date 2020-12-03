#include <stdio.h>
#include "promedio.h"
#include "componentes_numericos.h"
#include "calcular_promedio.h"

int main(){
    printf("MENU \n");
    printf("1. Calcular promedio.\n");
    printf("2. Mostrar componentes de un numero.\n");
    printf("3. Calcular promedio de numeros terminados en 5.\n");
    printf("Digite la opcion.\n");
    int opcion=0;
    scanf("%d", &opcion);

    int numero = pedir_numero();


    switch (opcion){
        case 1:            
            calcular_promedio(numero);
            break;
        case 2:                  
            imprimir_componentes(numero);
            break;
        case 3:
            mostrar_promedio_terminados_en_5();    
            break;

        default:
            break;
    }
}

