#include <stdio.h>

    void econtrarmediaArit (int vet[], int tamanho, int *cont, int *ac){

        *cont = 0;
        *ac=0;

        for(int i=1; i< tamanho;i++){
            *ac+=vet[i];
            (*cont)++;
        }
    }

    float mediaArit(int ac, int cont){

        return (float) ac/cont;
    }


int main(){

    int i, vet[100], tamanho=100;
    int ac, cont;
    float calcArit;

    for (i = 0; i < tamanho; i++) {
        printf("Digite um num: ");
        scanf("%d", &vet[i]);
    }

    econtrarmediaArit ( vet, tamanho, &cont, &ac);

    calcArit= mediaArit(ac, cont);

    printf("Calculo Arimedico = %.2f\n", calcArit);

    return 0;
}