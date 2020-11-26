#include <stdio.h>

//12. Leer un número entero de 3 dígitos y determinar si tiene el dígito 1.


int pedir_numero(){
    printf("Escriba un numero.\n");
    int numero = 0;
    scanf("%d", &numero);
    return numero;
}

void dividir_en_digitos(int numero){
   
    if(numero > 99 && numero < 1000){
       int digito =0;
        while (numero!= 0){
            digito = numero  % 10;
            numero = numero / 10;
  
            if(digito == 1){
                printf("El digito %d es igual a 1\n",digito );
            }else
            {
                printf("El digito %d  no es igual a 1\n",digito );
            }
        }
    }else
    {
        printf("El numero debe ser de 3 digitos");
    }    
}

int main(){
    int numero = pedir_numero();
    dividir_en_digitos(numero);
}



