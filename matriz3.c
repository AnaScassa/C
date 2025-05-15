#include<stdio.h>

int main(){

    int mat[10][15], vetor[15], soma;

    for(int i = 0; i < 10; i++){
    for(int j = 0; j < 15; j++){
        printf("Entre com um valor: ");
        scanf("%i", &mat[i][j]);

    vetor[i] = vetor[i] + mat[i][j];

    }

     if(vetor[i] % 2 == 0){
        printf("\nSoma da coluna %d = %d. O resultado é PAR\n", i + 1, vetor[i]);
    } else {
        printf("\nSoma da coluna %d = %d. O resultado é IMPAR\n", i + 1, vetor[i]);
    }

}

}