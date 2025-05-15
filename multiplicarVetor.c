#include<stdio.h>

int main(){

    int vetor[30], vetor2[30];

    for(int i = 0; i < 30 ; i++){
        printf("Insira um número: ");
        scanf("%d", &vetor[i]);

         if(i % 2 == 0){
            vetor2[i] = vetor[i] * 2;
         } else{
            vetor2[i] = vetor[i] * 3;
         }

    }

    for(int i = 0; i < 30; i++){
        printf("Vetor[%d] = %d\n",i, vetor[i]);
        printf("Vetor2[%d] = %d\n",i, vetor2[i]);

}
}