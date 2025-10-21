#include<stdio.h>
#include<stdlib.h>

struct pilha{
    int valor;
    struct pilha *prox;
}struct pilha *topo = NULL

void insere (int i){
    struct pilha * aux = (struct pilha*)malloc(sizeof(struct pilha));
    aux -> valor = i;
    if(topo == NULL)
        aux -> prox = NULL;
    else
        aux -> prox = topo;
    topo = aux;
}

void remover(){
    int valor;
    struct pilha *aux;
    if(topo != NULL){
        aux = topo;
        valor = topo->valor;
        topo = topo->prox;
        free(aux);
    }else{
        printf("\nPilha Vaiza");
        return 0;
    }
}

void imprime(){
    struct pilha *aux;
    if(topo != NULL){
        for(aux = topo; aux != NULL; aux=aux->prox){
            printf("Valor: %i\n", aux->valor);
        }
    }else{
        printf("\nPilha Vazia");
    }
}

int main(){
    int op, valor, retorno;
    while(op != 4){
        printf("Pilha Dinamica\n");
        printf("Digite 1 para Inserir\n2 para Imprimir\n3 para Remover\n4 para Sair\nEntre com a opção digitada: ");
        scanf("%i", &op);

        switch(op){
            case 1:
                printf("Entre com o valor: ");
                scanf("%i", &valor);
                insere(valor);
                break;
            case 2:
                imprime();
                break;
            case 3:
                retorno = remover();
                if(retorno != 0)
                    printf("Valor removido: %i", retorno);
                    break;
            case 4:
                exit(1);
                break;
            default:
            printf("\nOpção invalida");
        }
    }
}