#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct listaTarefa {
    int id;
    char descricao[50];
    int prioridade;
    int status; // 0 = pendente, 1 = concluída
};

struct cadastroTarefa {
    struct listaTarefa l;
} tarefa[5];

int ultimoId = 0;

void inserir(){
    int x;
    printf("Qual posição deseja colocar essa tarefa (0 a 4): ");
    scanf("%i", &x);
    getchar();

    if(x >= 0 && x < 5){
        if (tarefa[x].l.id == 0) {
            printf("Insira a descrição: ");
            fgets(tarefa[x].l.descricao, 50, stdin);
            tarefa[x].l.descricao[strcspn(tarefa[x].l.descricao, "\n")] = '\0'; // remove \n

            printf("Insira a prioridade (1 = alta ... 5 = baixa): ");
            scanf("%i", &tarefa[x].l.prioridade);

            printf("Insira status (0 = pendente / 1 = concluída): ");
            scanf("%i", &tarefa[x].l.status);

            // id auto incremento
            tarefa[x].l.id = ++ultimoId; 
            printf("Tarefa cadastrada!\n");
        } else {
            printf("Posição já está em uso.\n");
        }
    } else {
        printf("Posição inválida.\n");
    }
}

void exibir(){
    int vazio = 1;
    for (int i = 0; i < 5; i++) {
        if (tarefa[i].l.id != 0) {
            printf("\nID...........: %i", tarefa[i].l.id);
            printf("\nDescrição....: %s", tarefa[i].l.descricao);
            printf("\nPrioridade...: %i", tarefa[i].l.prioridade);
            printf("\nStatus.......: %s", tarefa[i].l.status == 0 ? "Pendente" : "Concluída");
            printf("\nPosição......: %i", i);
            printf("\n-------------------------\n");
            vazio = 0;
        }
    }
    if (vazio) printf("Lista vazia\n");
}

void remover(){
    int x, achei = 0;
    printf("Insira o ID da tarefa para remover: ");
    scanf("%i", &x);

    for (int i = 0; i < 5; i++) {
        if (tarefa[i].l.id == x) {
            tarefa[i].l.id = 0; 
            achei = 1;
            printf("Tarefa removida.\n");
            break;
        }
    }
    if (!achei) printf("Tarefa não encontrada.\n");
}

void listar(){
    int achei = 0;
    printf("\nTarefas pendentes:\n");
    for (int i = 0; i < 5; i++) {
        if (tarefa[i].l.id != 0 && tarefa[i].l.status == 0) {
            printf("\nID...........: %i", tarefa[i].l.id);
            printf("\nDescrição....: %s", tarefa[i].l.descricao);
            printf("\nPrioridade...: %i", tarefa[i].l.prioridade);
            printf("\nPosição......: %i", i);
            printf("\n-------------------------\n");
            achei = 1;
        }
    }
    if (!achei) printf("Nenhuma tarefa pendente.\n");
}

int main(){
    int op = 0;

    do {
        printf("\nLISTA DE TAREFAS\n");
        printf("1 - Sair\n2 - Adicionar\n3 - Exibir todas\n4 - Remover\n5 - Listar pendentes\n");
        printf("Escolha: ");
        scanf("%i", &op);
        getchar();

        switch (op) {
            case 1: printf("Saindo...\n"); break;
            case 2: inserir(); break;
            case 3: exibir(); break;
            case 4: remover(); break;
            case 5: listar(); break;
            default: printf("Opção inválida.\n");
        }
    } while (op != 1);

    return 0;
}
