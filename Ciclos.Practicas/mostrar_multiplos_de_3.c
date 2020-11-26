#include <stdio.h>

// 14. Mostrar en pantalla los primeros 20 múltiplos de 3.

void mostrar_multiplos(){
    int contador =0;
    int i=1;
   while (contador <20)
   {      
        if(i % 3 == 0){
            printf("%d ", i);
            
            contador++;
        } 
        i++;    
    }
     
}

int main(){
    mostrar_multiplos();
}