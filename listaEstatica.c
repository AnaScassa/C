#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da lista
struct lista {
    int valor[5];
    int tamanho;
    int inicio;
};


struct lista l; // Quando se coloca l.(variavel escolhida) se tem acesso as variaveis dentro da struct


void insereFinal() {
    int x;

    if (l.tamanho == 5) { 
        printf("\nLista cheia!\n");
        return;
    }

    printf("\nDigite um valor: ");
    scanf("%d", &x); //Guarda o valor na variavel X

    l.valor[l.tamanho] = x; // re coloca o valor x na lista "valor" e pega a posição pela variavel "tamanho", que vai ser sempre o final
    l.tamanho++; // adiciona 1 para o tamanho ficar no final da lista
    printf("Elemento %d inserido no final!\n", x);
}

void removeFinal() {
    if (l.tamanho == 0) {
        printf("\nLista vazia!\n");
        return;
    }

    l.tamanho--; // tira um valor da lista
    printf("Elemento %d removido do final!\n", l.valor[l.tamanho]); // remove o ultimo valor da lista
    // tem acesso ao final da lista pelo tamanho que sempre vai estar no final da lista
}

void imprime() {
    if (l.tamanho == 0) {
        printf("\nLista vazia!\n");
        return;
    }

    printf("\nElementos da lista:\n");
    for (int i = 0; i < l.tamanho; i++) { // percorre toda a lista e imprime
        printf("Elemento %d: %d\n", i, l.valor[i]);
    }
}

void procurar(){
    int x, i;
    printf("Digite o valor que deseja procurar: ");
    scanf("%i", &x);

    for ( i = 0; i < l.tamanho; i++) // percorre toda a lista
    {
        if(x == l.valor[i]){ // E verifica se o valor de X inserido pelo usuairo é o mesmo valor encontrado na lista
            printf("\nItem encontrado na lista na posição %i\n", i);
        }else{
            printf("\nItem não encontrado na posição %i", i);
        }
    }
    
}

int main() {
    l.tamanho = 0;
    l.inicio = 0;

    int op = 0;

    while (op != 5) {
        printf("\n--- Manipulando Lista Estática ---\n");
        printf("1 - Inserir no Final\n");
        printf("2 - Imprimir Lista\n");
        printf("3 - Remover do Final\n");
        printf("4 - Procurar na Lista\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                insereFinal();
                break;
            case 2:
                imprime();
                break;
            case 3:
                removeFinal();
                break;
            case 4:
                procurar();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
