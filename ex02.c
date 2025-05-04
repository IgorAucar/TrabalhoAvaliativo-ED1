#include <stdio.h>

int main(){

    int vet[5],i;

    for(i=4; i>=0; i--){
        printf("Digite um num:");
        scanf("%d", &vet[i]);
    }

    printf("Valores em ordem inversa: \n ");
    for(i=0; i<5; i++){
        printf("%d", vet[i]);
    }

    return 0;
}