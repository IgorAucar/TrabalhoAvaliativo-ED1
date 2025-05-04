#include <stdio.h>
#include <math.h>

#define TAM 100

void vet (int vetor[], int tamanho){

    for (int i=0; i < tamanho ; i++){
        printf("Digite um numero: \n");
        scanf("%d", &vetor[i]);
    }

}

void vetQuadrado(int vetor[], int tamanho, float soma, double quadrado){

    int ac=0;
    soma =0;
    quadrado=0;

    for (int i=0; i < tamanho ; i++){
        vetor[i] = (int)pow(vetor[i], 2);
        ac += vetor[i];

    }
        soma = ac/tamanho;
       
        quadrado = sqrt(soma);
        printf("A Raiz media quadradica: %.2f \n", quadrado);
}


int main (){

    int vetor[TAM], tamanho = TAM;
    float soma, quadrado;


    vet(vetor,tamanho);
    vetQuadrado(vetor,tamanho,soma, quadrado);




    return 0;
}