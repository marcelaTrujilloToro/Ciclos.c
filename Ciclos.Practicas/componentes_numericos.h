# include <stdio.h>
//30. Leer un número entero y mostrar todos sus componentes numéricos o sea aquellos para quienes el sea un múltiplo.
 
int pedir_numero(){
    printf("Digite un numero\n");
    int numero = 0; 
    scanf("%d", &numero);
    return numero;
}

void imprimir_componentes(int numero){
    
    for (int i = 1; i < numero; i++)
    {
        int componente =0; 
        componente = numero % i;
        if (componente == 0)
        {
            printf("Es componente: %d \n", i);
        }
    }   
}