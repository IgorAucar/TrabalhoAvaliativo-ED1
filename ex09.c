#include <stdio.h>
#include <stdlib.h>


#define TAM 30
#define TAM2 60

int main(){

    int vetor1[TAM];
    int vetor2[TAM];
    int vetor3[TAM2];
    int i=0,j=0,k=0;

    printf("Digite os numeros do VETOR 1 ORDENADOS: \n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os numeros do VETOR 2 ORDENADOS: \n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", &vetor2[i]);
    }

    i = 0; 
    while (i < TAM && j < TAM) {
        if (vetor1[i] < vetor2[j]) {
            vetor3[k++] = vetor1[i++];
        } else {
            vetor3[k++] = vetor2[j++];
        }
    }

    while (i < TAM) {
        vetor3[k++] = vetor1[i++];
    }

    while (j < TAM) {
        vetor3[k++] = vetor2[j++];
    }

    
    printf("\nConjunto Intercalado (ordenado):\n");
    for (i = 0; i < TAM2 ; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
