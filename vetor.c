#include <stdio.h>
#include <float.h>  

int main() {
    float vetor[5];
    float maior = -FLT_MAX, menor = FLT_MAX;
    float media, mediaFinal;

    for (int i = 0; i < 5; i++) {  
        printf("Insira a nota %d: ", i + 1);  
        scanf("%f", &vetor[i]);  

        media = 0;

        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }

        media = media + vetor[i];
        mediaFinal = media + mediaFinal;

    }
    mediaFinal = mediaFinal/5;


    printf("A maior nota é %f e a menor é %f.\n", maior, menor);
    printf("A média é %f", mediaFinal);

    return 0;
}
