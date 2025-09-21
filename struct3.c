#include <stdio.h>
#include <stdlib.h>

struct fichaAluno {
    int matricula;
    char nome[50];
    float notaFinal;
};

struct cadastroAluno {
    struct fichaAluno a;
} aluno[10];

int tamanho = 0;

void cadastro() {
    if(tamanho >= 10){
        printf("Lista cheia");
    }else{
    printf("---Cadastro aluno---");

    printf("\nInsira o nome do aluno: ");
    getchar();
    fgets(aluno[tamanho].a.nome, 50, stdin);

    printf("Insira a nota final do aluno: ");
    scanf("%f", &aluno[tamanho].a.notaFinal);

    printf("Insira a matricula do aluno: ");
    scanf("%d", &aluno[tamanho].a.matricula);

    tamanho++; 
    }
}

void exibir(){
    if (tamanho > 0)
    {
        for (int i = 0; i < tamanho; i++)
        {
            printf("Nome.........: %s", aluno[i].a.nome);
            printf("Matricula....: %i", aluno[i].a.matricula);
            printf("\nNota final...: %.2f", aluno[i].a.notaFinal);
            printf("\n-------------------------\n");
        }
    }else{
        printf("Lista vazia\n");
    }
}

void remover(){
    int x;
    printf("Insira o numero da matricula: ");
    scanf("%i", &x);

    for (int i = 0; i < tamanho; i++){
        if (x == aluno[i].a.matricula){
            for (int j = i; j < tamanho - 1; j++){
                aluno[j] = aluno[j + 1];
            }
            printf("Aluno removido\n");
            tamanho--;
        }
    }

}

void procurar(){
    int x;
    printf("Insira o numero da matricula: ");
    scanf("%i", &x);

    for (int i = 0; i < tamanho; i++)
    {
        if (x == aluno[i].a.matricula)
        {
            printf("Nome.........: %s", aluno[i].a.nome);
            printf("Matricula....: %i", aluno[i].a.matricula);
            printf("\nNota final...: %.2f", aluno[i].a.notaFinal);
            printf("\nAluno da posição: %i", i);
            printf("\n-------------------------\n");  
        }
    }

}

int main(){
    int op = 0;

    do
    {
        printf("Sistema de cadastro de aluno");
        printf("\nInsira: \n1-Sair do programa\n2-Cadastrar aluno\n3-Exibir alunos\n4-Remover aluno\n5-Procurar aluno\n");
        scanf("%i", &op);

        switch (op)
        {
        case 1:
            printf("Saindo do programa...");
            break;
        
        case 2:
            cadastro();
            break;

        case 3:
            exibir();
            break;

        case 4:
            remover();
            break;

        case 5:
            procurar();
            break;
        
        default:
        printf("Opção invalida");
            break;
        }
    } while (op != 1);
    
}