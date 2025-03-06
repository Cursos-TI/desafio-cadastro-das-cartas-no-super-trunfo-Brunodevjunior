#include <stdio.h>             // bispo 5 casas para direita / rainha 8 casas a esquerda / torre 5 casas para frente/

int main (){
    int num;
    int i = 0;

    // Mover o bispo 5 casas para direita

    for (int i = 0; i < 5; i++)
        printf ("bispo para a direita\n"); // direção da peça

         
        
         // MOVER TORRE 5 CASAS PARA FRENTE
         do {
            printf("%d\n", i);
            
            printf("TORRE MOVIDA 5 CASAS PARA FRENTE: %d\n", i);
        } while (i == 5);


// rainha 8 casas para esquerda
    

   
       printf("Digite 8 para a rainha ir 8 casas para a esquerda: \n");
        scanf("%d", &num);
       
        while (num >= 0) {
            printf("Rainha movida a 8 casas para esquerda: %d\n", num);
           scanf("%d", &num);
           i++;
        }
        
  
        
       
        return 0;
    }


