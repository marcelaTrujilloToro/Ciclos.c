#include <stdio.h>
//28. Leer 2 números enteros y determinar cual de los dos tiene mayor cantidad de dígitos primos.


int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

int dividir_digitos(int numero){
    
    int digito=0;
    int contador=0;
    while (numero !=0)
    {   
        digito = numero % 10;
        numero = numero / 10;
        
        for (int i = 1; i <= digito ; i++)
        {              
            if (digito % i == 0)
            {
                contador ++;
            }  
                        
        }  
                      
    }
    return  contador;
}


int main(){
    int numero = pedir_numero();
    int contador1 = dividir_digitos(numero);
    int numero2 = pedir_numero();
    int contador2 = dividir_digitos(numero2);
    
    printf("%d , %d ", contador1, contador2);

    
}