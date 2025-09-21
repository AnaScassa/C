#include<stdio.h>

struct fichaAluno{
    char nome[40];
    int numero;
    float nota;
};
struct fichaAluno aluno; // crio uma variavel para chamar a struct

void cadastrar(){
    printf("Insira o nome do aluno: ");
    fgets(aluno.nome, 40, stdin);
    printf("Insira o número do aluno: ");
    scanf("%i", &aluno.numero);
    printf("Insira a nota do aluno: ");
    scanf("%f", &aluno.nota);
}

void exibir(){
    printf("---Aluno---");
    printf("\nNome do aluno.....: %s", aluno.nome);
    printf("\nNúmero do aluno...: %i", aluno.numero);
    printf("\nNota do aluno.....: %.2f", aluno.nota);
}

int main(){
    cadastrar();
    exibir();
}