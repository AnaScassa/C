#include <stdio.h>

int main()
{
    float numNotas, nota, notaAtual, media, mediaSala;
    int repeticao = 1;
    float numAluno = 0;

    while(repeticao == 1){   
    
    media = 0; notaAtual = 0; numNotas = 0;
    numAluno++;
    printf("Aluno N%.0f", numAluno);    

    printf("\nInsira quantas notas vai ter: ");
    scanf("%f", &numNotas);
    
    for(int x = 0 ; x < numNotas ; x++){

        printf("Insira a nota: ");
        scanf("%f", &nota);
        
        notaAtual = notaAtual + nota;
    }
    
    media = notaAtual / numNotas;
    
    printf("A média é %.2f", media);

    if(media >= 6){
        printf("\nAluno aprovado!");
    }
    else if(media < 6){
        ("\nAluno reprovado!");
    }

    mediaSala = mediaSala + media;

    printf("\nDigite '1' para calcular uma nova nota ");
    scanf("%d", &repeticao);

    } 

    if(repeticao != 1){

        mediaSala = mediaSala/ numAluno;

        printf("A média da sala é: %.2f", mediaSala);
        printf("\n\nDesligando programa...");
    }

    return 0;

}