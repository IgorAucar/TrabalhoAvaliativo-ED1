#include <stdio.h>
#include <math.h>



int main(){

    int vetnumOp[15], vetNumPecas[15],vetsexo[15], calcSal = 0;
    float folhaPagamento = 0.0;
    float vetSalarios[15];
    int i;

    for (i=0; i < 15 ; i++){

    printf("Digite o seu numero \n");
    scanf("%d", &vetnumOp[i]);

    printf("Numero de pecas fabricadas por mes \n");
    scanf("%d", &vetNumPecas[i]);
        if (vetNumPecas[i] <=30 )
        {
            vetSalarios[i] = 1518.00;
        }

        else if (vetNumPecas[i] <= 35){
            int calcSal = vetNumPecas[i] - 30;
            vetSalarios[i] = 1518.00 + (calcSal * 0.03 * 1518.00);

        }
        
        else{
            int calcSal = vetNumPecas[i] - 30;
            vetSalarios[i] = 1518.00 + ( calcSal * 0.05 * 1518.00);
        }


    printf("Qual seu sexo: (1) MASC  ou (2) FEM: \n");
    scanf("%d", &vetsexo[i]);

        folhaPagamento += vetSalarios[i];
    }

    for (i=0; i < 15 ; i++){
        printf("Numero do Operario: %d \n", vetnumOp[i]);

        printf("Pecas Fabricadas: %d \n", vetNumPecas[i]);

        printf("Salario : R$%.2f \n", vetSalarios[i]);
    }

    printf("Folha de Pagamento da Fabrica R$%.2f \n",folhaPagamento);





    return 0;
}