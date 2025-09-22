#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct listaFilmes{
    int id;
    char titulo[50];
    char diretor[30];
    int ano;
    float notaMedia;
};

struct lista{
    struct listaFilmes l;
}filmes[10];

int tamanho = 0;
int ultimoID = 0;

void adicionar(){
    printf("Insira o nome do filme: ");
    getchar();
    fgets(filmes[tamanho].l.titulo, 50, stdin);
    filmes[tamanho].l.titulo[strcspn(filmes[tamanho].l.titulo, "\n")] = '\0';

    printf("Insira o diretor do filme: ");
    fgets(filmes[tamanho].l.diretor, 30, stdin);
    filmes[tamanho].l.diretor[strcspn(filmes[tamanho].l.diretor, "\n")] = '\0';

    printf("Insira o ano de lançamento do filme: ");
    scanf("%i", &filmes[tamanho].l.ano);

    printf("Insira a nota média do filme: ");
    scanf("%f", &filmes[tamanho].l.notaMedia);

    filmes[tamanho].l.id = ++ultimoID;
    tamanho++;
}

 void listar(){
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nID...............: %i", filmes[i].l.id);
        printf("\nNome.............: %s", filmes[i].l.titulo);
        printf("\nDiretor..........: %s", filmes[i].l.diretor);
        printf("\nAno de Lançamento: %i", filmes[i].l.ano);
        printf("\nNota média.......: %.2f", filmes[i].l.notaMedia);
        printf("\n----------------------------------------\n");
    } 
}

void remover(){
    int x;

    printf("Digite o ID do filme: ");
    scanf("%i", &x);

    for (int i = 0; i < tamanho; i++)
    {
        if (filmes[i].l.id == x)
        {
            for (int j = i; j < tamanho - 1; j++)
            {
                filmes[j] = filmes[j + 1];
            }
            
            printf("Filme removido\n");
            tamanho--;
        }
    }
}

void buscar(){
    char x[50];

    printf("Digite o nome do filme: ");
    getchar();
    fgets(x, 50, stdin);
    x[strcspn(x, "\n")] = '\0';

    for (int i = 0; i < tamanho; i++)
    {
        if (strcspn(filmes[i].l.titulo, x) == 0)
        {
            printf("\nID...............: %i", filmes[i].l.id);
            printf("\nNome.............: %s", filmes[i].l.titulo);
            printf("\nDiretor..........: %s", filmes[i].l.diretor);
            printf("\nAno de Lançamento: %i", filmes[i].l.ano);
            printf("\nNota média.......: %.2f", filmes[i].l.notaMedia);
            printf("\n----------------------------------------\n");
        }   
    }
}

int main(){
    int op = 0;

    do
    {
        printf("\n****Sistema Lista Filmes****");
        printf("\n1-Adionar filme na lista\n2-Remover filme pelo ID\n3-Buscar filme pelo título\n4-Listar todos os filmes\n5-Sair\nEscolha: ");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            adicionar();
            break;

        case 2:
            remover();
            break;

        case 3:
            buscar();
            break;

        case 4:
            listar();
            break;
        
        case 5:
            printf("Saindo do programa...");
            break;
        default:
        printf("Opção invalida");
            break;
        }
    } while (op != 5);
}