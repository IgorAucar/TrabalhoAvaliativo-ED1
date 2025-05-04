#include <stdio.h>



int main(){
    int vetor[50];
    int vet2[20];
    int i, j, primo;

    for (int i = 0; i < 50; i++) {
        vetor[i] = i + 1;  
    }

    for (int i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }

    printf(" \n Numeros primos de 1 a 50:\n");

    for (i = 2; i <= 50; i++) {
        primo = 1;  

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                primo = 0;  
                break;
            }
        }

        if (primo) {
            printf("%d ", i);
        }
    }

    printf("\n");
   
    return 0;
}