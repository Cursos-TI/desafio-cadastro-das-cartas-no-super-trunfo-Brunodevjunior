#include <stdio.h>


int main() {

    print ("JOGO SUPER TRUNFO");
    char estado[100]; /*%s*/ /*string*/
    char cidade[100]; /*%s*/ /*string*/

    int codigocartas;/*%d*/ 
    int populacao;  /*%d*/
    int quilometrosquadrados; /*%d*/
    int pontosturisticos;/*%d*/

    int pib;/*%d*/

    printf("Qual estado\n");
    scanf("%s" ,estado); 

    printf("Qual é a cidade\n");
    scanf("%s" ,cidade);

    printf("Qual é o código da carta\n");
    scanf("%d"  ,codigocartas);

    printf("Qual é a população\n");
    scanf("%d"  ,populacao);

    printf("Quantos quilometros quadrados\n");
    scanf("%d" ,quilometrosquadrados);

    printf("Qual é o pib\n");
    scanf("%d" ,pib);

    printf("Quantos pontos turisticos\n");
    scanf("%d" ,pontosturisticos);



    printf ("estado é : %s\n - A cidade é : %s\n",estado,cidade);
    printf("O código da cartá é :%d\n" ,codigocartas);
    printf ("A população é :%d\n" ,populacao);
    printf("Quilometros quadrados : %d\n" ,quilometrosquadrados);
    printf ("Pontos turísticos :%d\n" ,pontosturisticos);
    printf("O Pib é : %d\n" ,pib);


    return 0;
}
