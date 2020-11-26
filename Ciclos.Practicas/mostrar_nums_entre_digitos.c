#include <stdio.h>

/* 11. Leer un número entero de dos dígitos y mostrar en pantalla todos los enteros comprendidos
entre un dígito y otro. */


int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

void mostrar_numeros_ascendenmente(int numero, int numero2){
    
    while (numero <= numero2)
    {
        printf("%d ",numero ,"\n");
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
    int numero = pedir_numero();
    int dig1 =0;
    int dig2=0;
    if (numero>9 && numero< 100)
    {
        dig1 = numero /10;
        dig2 = numero % 10;
        definir_mayor(dig1, dig2);
    }else
    {
        printf("El numero debe ser de dos digitos");
    }
    
    

}