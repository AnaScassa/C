#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct listaLivros {
    char livro[50];
    char autor[30];
    int anoPublicacao;
    int codigo;
    int disponibilidade; // 0 = emprestado, 1 = disponivel

};

struct lista{
    struct listaLivros l;
}livros[10];

int tamanho = 0;
int codigoLivros = 0;

void cadastro() {
    if (tamanho > 10) {
        printf("Lista de livros cheia");
    } else {
        printf("Insira o nome do livro: ");
        getchar();
        fgets(livros[tamanho].l.livro, 50, stdin);
        // NÃO ESQUECER DE COLOCAR ISSO PRA O \n DO FINAL SAIR
        livros[tamanho].l.livro[strcspn(livros[tamanho].l.livro, "\n")] = '\0';

        printf("Insira o nome do autor: ");
        fgets(livros[tamanho].l.autor, 30, stdin);
        livros[tamanho].l.autor[strcspn(livros[tamanho].l.autor, "\n")] = '\0';

        printf("Insira o ano de publicação: ");
        scanf("%i", &livros[tamanho].l.anoPublicacao);

        printf("Insira (0-Emprestado, 1-Disponível): ");
        scanf("%i", &livros[tamanho].l.disponibilidade);

        livros[tamanho].l.codigo = ++codigoLivros;

        printf("Livro cadastrado\n\n");
        tamanho++;
    }
}

void listar(){
    if (tamanho < 0)
    {
        printf("Lista vazia");
    }else{
        for (int i = 0; i < tamanho; i++)
        {
            printf("\nCódigo...........: %i", livros[i].l.codigo);
            printf("\nNome.............: %s", livros[i].l.livro);
            printf("\nAutor............: %s", livros[i].l.autor);
            printf("\nAno de publicação: %i", livros[i].l.anoPublicacao);
            if (livros[i].l.disponibilidade == 0)
            {
                printf("\nStatus...........: Emprestado");
            }else{
                printf("\nStatus...........: Disponível");
            }
            printf("\n---------------------------\n\n");   
        }   
    }
}

void remover(){
    int x;

    printf("Digite o código do livro para remover ele: ");
    scanf("%i", &x);

    for (int i = 0; i < tamanho; i++)
    {
        if (livros[i].l.codigo == x)
        {
            for (int j = i; j < tamanho - 1; j++){
                livros[j] = livros[j + 1];
            }
            printf("Livro removido\n");
            tamanho--;
        }   
    }
}

void buscaLivro(){
    char x[50];

    printf("Insira o nome que deseja buscar: ");
    getchar();
    fgets(x, 50, stdin);

    // remove o '\n' do final, se existir
    x[strcspn(x, "\n")] = '\0';

    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(livros[i].l.livro, x) == 0) // jeito de comparar uma string
        {
            printf("\nCódigo...........: %i", livros[i].l.codigo);
            printf("\nNome.............: %s", livros[i].l.livro);
            printf("Autor............: %s", livros[i].l.autor);
            printf("Ano de publicação: %i", livros[i].l.anoPublicacao);
            if (livros[i].l.disponibilidade == 0)
            {
                printf("\nStatus...........: Emprestado");
            }else{
                printf("\nStatus...........: Disponível");
            }
            printf("\n---------------------------\n\n");  
        }   
    }
}

void alterarStatus(){
 char x[50];

    printf("Insira o nome que deseja buscar: ");
    getchar();
    fgets(x, 50, stdin);

    x[strcspn(x, "\n")] = '\0';

    for (int i = 0; i < tamanho; i++)
    {
        if (strcmp(livros[i].l.livro, x) == 0) 
        {
            printf("Insira o novo status (0=Emprestado, 1=Disponível): ");
            scanf("%i", &livros[i].l.disponibilidade);
            printf("Novo status atualizado\n");
        }   
    }
}

int main(){
    int op = 0;

    do
    {
        printf("****SISTEMA DE LIVROS****\n");
        printf("1-Cadastrar livro\n2-Remover livro\n3-Busca livro\n4-Alterar status\n5-Listar livros\n6-Sair\nEscolha: ");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            cadastro();
            break;

        case 2:
            remover();
            break;

        case 3:
            buscaLivro();
            break;

        case 4:
            alterarStatus();
            break;

        case 5:
            listar();
            break;
        
        case 6:
            printf("Saindo do programa...");
            break;
        default:
            break;
        }
    } while (op != 6);
    
}