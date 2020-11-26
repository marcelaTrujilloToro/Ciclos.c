#include <stdio.h>
//6. Leer un número entero de tres dígitos y mostrar todos los enteros comprendidos entre 1 y cada uno de los dígitos.


int dig1 = 0;
int dig2 = 0;
int dig3 = 0;
int residuo = 0;

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

void dividir_en_digitos(int numero){
   
    if(numero > 99 && numero < 1000){
        dig1 = numero / 100;
        residuo = numero % 100;
        dig2 = residuo / 10;
        dig3 = residuo % 10;
    }
}

void mostrar_numeros(int digito){
    printf("\n Estos son los digitos hasta: %d", digito);
    for (int i = 1; i <= digito; i++)
    {
        
        printf("\n %d", i);
    }
    
}


int main(){
    int num1 = 0;
    num1 = pedir_numero();
   

    dividir_en_digitos(num1);
    mostrar_numeros(dig1);
    mostrar_numeros(dig2);
    mostrar_numeros(dig3);
    
}