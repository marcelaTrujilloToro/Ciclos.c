#include <stdio.h>

//18. Leer dos números entero y mostrar todos los múltiplos de 5 comprendidos entre el menor y el mayor.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}


void mostrar_multiplos_ascendenmente(int numero, int numero2){
     int contador =0;
    int i=1;
    while (numero <= numero2)
    {
         if(i % 5 == 0){
            printf("%d ", i);
            
            contador++;
        } 
        i++; 
        numero++;
    }        
}

void definir_mayor(int numero1, int numero2){
    if (numero1<numero2){
        mostrar_multiplos_ascendenmente(numero1, numero2);
    }else
    {
        mostrar_multiplos_ascendenmente(numero2, numero1);
    }    
}

int main(){
    int numero = 0;
    numero = pedir_numero();
    int numero2 = 0;
    numero2 = pedir_numero();    
    definir_mayor(numero, numero2);    
}