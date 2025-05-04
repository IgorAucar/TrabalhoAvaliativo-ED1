#include <stdio.h>
#include <math.h>

int main(){

    int vet1[30], vet2[30], vet3[60];
    int i=0, j=0 , k=0;

    for (i=0; i<30; i++){
        printf("Digite um numero para o Vetor 1: \n ");
        scanf("%d",&vet1[i]);
    }

    for (j=0; j<30; j++){
        printf("Digite um numero para o Vetor 2: \n ");
        scanf("%d",&vet2[j]);
    }

    for(i=0;i<30;i++){
        vet3[2* i] = vet1[i];
        vet3[2* i + 1] = vet2[i];
    }

    printf("Vetor intercalado: ");
    for (k = 0; k < 60; k++) {
        printf("%d ", vet3[k]);
    }
    printf("\n");

    return 0;
}