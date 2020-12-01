#include <stdio.h>

//26. Leer un número entero y determinar cuál es el mayor de sus dígitos.

int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int determinar_num_mayor(int numero){
   int mayor=0;
   int digito=0;

    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;
        if (mayor < digito)
        {
            mayor = digito; 
        }        
    }
    return mayor;   
}

int main(){
    int numero = pedir_numero();
    int mayor = determinar_num_mayor(numero);
    printf("El mayor de los digitos es: %d", mayor  );

}