/*01 - Fazer um algoritmo que leia a nota de 10 alunos de uma disciplina. Calcule e
escreva o número de alunos que tiveram notas superior à média da turma. */


#include <stdio.h>

int main(){

    int i = 0, cont=0;
    float nota[10], media, ac=0;

    for (i=0; i<10 ; i++){
        printf("Digite a sua nota: ");
        scanf("%f", &nota[i]);
        ac+= nota[i];
    }

    media = ac/10;

    for (i=0; i<10;i++){
        if(nota[i] > media){
            cont++;
        }
    }


    printf("A média da turma foi: %.2f\n", media);
    printf("Número de alunos com nota acima da média: %d\n", cont);
    
    return 0;
}