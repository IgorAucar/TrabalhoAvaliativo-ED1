#include <stdio.h>
int main(){

    int i=0, v1[100], var;
    int cont=0;

    printf("Digite o valor da variavel: ");
    scanf("%d", &var);

    for ( i = 0; i < 100; i++)
    {
        printf("Digite um número para o vetor: ");
        scanf("%d",&v1[i]);
        if(v1[i] == var){
            cont++;
        }
    }
    if (cont >= 1){
        printf("O valor da variavel existe no conjunto");
    }
    else{
        printf("O valor não existe");
    }
    return 0;
}