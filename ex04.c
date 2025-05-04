#include <stdio.h>

int main(){
    int i, vet[100];
    int maior, menor, calc;
    
    
    
    for ( i = 0; i < 100; i++)
    {
       printf("Digite um num:  ");
       scanf("%d", &vet[i]);

    }

    maior = vet[0];
    menor = vet[0];

    for ( i = 0; i < 100; i++)
    {
        if(vet[i] > maior){
            maior = vet[i];
        }
        else if(vet[i] < menor){
            menor = vet[i];
        }
    }
    
    calc = maior - menor;

    printf("A amplitude é = %d", calc);

    return 0;
}