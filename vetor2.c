#include <stdio.h>
#include <float.h>  

int main() {

    float vetor[5];
    float conferir;
    

    for (int i = 0; i < 5; i++) {  
        printf("Insira o número %d: ", i + 1);  
        scanf("%f", &vetor[i]);  

    }

    printf("Insira o número que quer conferir: ");
    scanf("%f", &conferir);

    for (int j = 0; j < 5; j++)
    {
        if(conferir == vetor[j]){
            printf("O número %.2f, está inserida na posição %d", conferir, j + 1);
        } else {
            printf("O número não está inserido");
        }
    }

    return 0;
}
