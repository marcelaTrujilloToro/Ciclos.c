#include <stdio.h>

//5. Leer dos números y mostrar todos los números terminados en 4 comprendidos entre ellos.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

void mostrar_numeros_ascendenmente(int numero, int numero2){

    while (numero <= numero2)
    {
        if(numero % 10 == 4){
            printf("%d ", numero,"\n");         
           
        }
        numero++;
    }
        
}

void definir_mayor(int numero1, int numero2){
    if (numero1<numero2){
        mostrar_numeros_ascendenmente(numero1, numero2);
    }else
    {
        mostrar_numeros_ascendenmente(numero2, numero1);
    }    
}

int main(){
    int numero = 0;
    numero = pedir_numero();
    int numero2 = 0;
    numero2 = pedir_numero();
    definir_mayor(numero, numero2);
    
}