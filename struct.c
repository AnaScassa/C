#include<stdio.h>

struct pokemon{

    char nome[50], tipo [20];
    int nivel, vida, ataque, defesa;
}; 

struct pokemon p;

void cadastrar(){

    printf("Insira o NOME do pokemon: ");
    fgets(p.nome,50,stdin);
    printf("Insira o TIPO do pokemon: ");
    fgets(p.tipo,20,stdin);
    printf("Insira o NÍVEL do pokemon: ");
    scanf("%i", &p.nivel);
     printf("Insira a VIDA do pokemon: ");
    scanf("%i", &p.vida);
    printf("Insira o ATAQUE do pokemon: ");
    scanf("%i", &p.ataque);
    printf("Insira o DEFESA do pokemon: ");
    scanf("%i", &p.defesa);
}

void exibir(){

    printf("\nNome: %s", p.nome);
    printf("\nTipo: %s", p.tipo);
    printf("\nNivel: %i", p.nivel);
    printf("\nVida: %i", p.vida);
    printf("\nAtaque: %i", p.ataque);
    printf("\nDefesa: %i", p.defesa);
    
}

int main(){
    printf("***Cadastrar Pokemon***\n");
    cadastrar();
    exibir();
}