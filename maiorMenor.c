#include <stdio.h>

int main(){

    float maior = 0 , menor = 10, indiceMenor, indiceMaior;
    float vetor[15];

    for(int i = 0; i < 15; i++){
        printf("Insira um número para o índice: ");
        scanf("%f", &vetor[i]);

        if(maior < vetor[i] ){
            maior = vetor[i];
            indiceMaior = i;
        } 
        if(menor > vetor[i] ){
            menor = vetor[i];
            indiceMenor = i;
        }
        
    }

    printf("O maior número foi %.2f e o menor foi %.2f ", maior, menor);
    printf("O índice do maior é %.2f e o menor foi %.2f ", indiceMaior, indiceMenor);
}