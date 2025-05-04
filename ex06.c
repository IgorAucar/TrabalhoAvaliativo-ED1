#include <stdio.h>
#include <math.h>

#define TAM 100

void vet (int vet[], int tamanho){
	for(int i=0; i < tamanho; i++){
		printf("Digite um valor: ");
		scanf("%d", &vet[i]);		
		
	}
	
}

int mediaAritmedica (int vetor[], int tamanho){
	
	int soma = 0;
	
	for(int i=0;i<tamanho; i++){
		soma += vetor[i];		
	}
	int media = soma/tamanho; 
	return soma;
}

void desvioDireto(int vetor[], int tamanho){
	int soma = mediaAritmedica(vetor, tamanho);
	float media= soma/(float) tamanho;
	float somaDesvios= 0.0;
	
	for (int i = 0; i < tamanho; i++) {
        somaDesvios += fabs(vetor[i] - media);  
    }
    float desvioMedio = somaDesvios / tamanho;
    printf(" Desvio medio: %.2f\n", desvioMedio);
	 

	}

int main(){
	int tamanho = TAM;
	int vetor[TAM], soma;
	int contador= 0, media;
	
	vet(vetor, tamanho);
	
	desvioDireto(vetor, tamanho);
	return 0;
}