#include <stdio.h>

//25. Leer un número entero y determinar a cuánto es igual el promedio entero de sus dígitos.

float pedir_numero(){
    printf("Escriba un numero.\n");
    float numero = 0;
    scanf("%f", &numero);
    return numero;
}

float promediar(float cantidad, int suma){
    float promedio = 0; 
    promedio = suma / cantidad ;
    
    return promedio; 
}

float sumar_digitos(int numero){
    int digito =0;
    int suma=0;
    int contador =0;

    while (numero !=0)
    {
        digito = numero %10;
        numero = numero /10;
        suma = suma + digito;
        contador++; 
        
    }
    float promedio = promediar(contador, suma);
    return promedio; 
    
}

int main(){
    float numero = pedir_numero();
    float promedio = sumar_digitos(numero);
    printf("El promedio de la suma de los digitos es: %.2f", promedio);

}