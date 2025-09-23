#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct listaLivros{
    char nome[30];
    char autor[30];
    int numPaginas;
    int id;
};

struct livros{
    struct listaLivros l;
}livro[5];

int tamanho;
int ultimoId;

void adicionar(){
    if(tamanho < 5){
        printf("Nome:  ");
        getchar();
        fgets(livro[tamanho].l.nome, 30, stdin);
        livro[tamanho].l.nome[strcspn(livro[tamanho].l.nome, "\n")] = '\0';

        printf("Autor: ");
        fgets(livro[tamanho].l.autor, 30, stdin);
        livro[tamanho].l.autor[strcspn(livro[tamanho].l.autor, "\n")] = '\0';

        printf("Número de páginas: ");
        scanf("%i", &livro[tamanho].l.numPaginas);

        livro[tamanho].l.id = ++ultimoId;
        tamanho++;
        printf("Livro cadastrado com sucesso\n\n");
    }else{
        printf("Lista cheia");
    }
}

void listar(){
    if(tamanho < 1){
        printf("Lista vazia\n\n");
    }else{
        for(int i = 0; i < tamanho ; i++){
            printf("\nID...............: %i", livro[i].l.id);
            printf("\nNome.............: %s", livro[i].l.nome);
            printf("\nAutor............: %s", livro[i].l.autor);
            printf("\nNúmero de páginas: %i", livro[i].l.numPaginas);
            printf("\n--------------------------------\n\n");
        }
    }
}

void excluir(){
    int x;
    printf("Qual id do livro que deseja excluir: ");
    scanf("%i", &x);

    for(int i = 0; i < tamanho; i++){
        if(livro[i].l.id == x){
            for(int j = i; j < tamanho - 1; j++){
                livro[j] = livro[j + 1];
            }
            printf("Livro removido\n\n");
            tamanho--;
        }else{
            printf("Livro não encontrado\n\n");
        }
    }
}

void buscar(){
    char x[30];

    printf("Digite o nome do livro: ");
    getchar();
    fgets(x, 30, stdin);
    x[strcspn(x, "\n")] = '\0';

    for (int i = 0; i < tamanho; i++)
    {
        if(strcspn(livro[i].l.nome, x) == 0){
            printf("\nID...............: %i", livro[i].l.id);
            printf("\nNome.............: %s", livro[i].l.nome);
            printf("\nAutor............: %s", livro[i].l.autor);
            printf("\nNúmero de páginas: %i", livro[i].l.numPaginas);
            printf("\n--------------------------------\n\n");
        }
    }
    
}

int main(){
    int op = 0;
    do{
        printf("\n***Sistema de Biblioteca***");
        printf("\nDigite o que deseja fazer:\n1-Cadastrar um livro\n2-Exibir livros\n3-Excluir um livro\n4-Buscar livro \n5-Sair do programa");
        scanf("%i", &op);

        switch(op){
            case 1:
                adicionar();
                break;
            case 2:
                listar();
                break;
            case 3:
                excluir();
                break;
            case 4:
                buscar();
                break;
            case 5:
                printf("Saindo....");
                break;
            default:
                printf("Opção invalida");
                break;
        }
    }while(op != 5);
}