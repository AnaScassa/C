//usando uma struct dentro de outra struct
#include<stdio.h>
#include<stdlib.h>

struct tipoEndereco{
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[40];
    int cep;
};

struct tipoDataNascimento{
    char dataNasceu[10];
};

struct cadastroCliente{
    char nomeCliente[40];
    int telefone;

    //chamando as struct a cima aqui:
    struct tipoEndereco endereco;
    struct tipoDataNascimento dataNascimento; 
} cadastro[10];

void cadastrar(int tamanho){
    printf("--- Cadastro de Aluno ---");
    if(tamanho >= 10){
        printf("Lista de alunos cheia");
    }else{
        printf("\nNome do cliente: ");
        getchar();
        fgets(cadastro[tamanho].nomeCliente, 40, stdin);
        printf("\nTelefone do cliente: ");
        scanf("%d", &cadastro[tamanho].telefone, 40, stdin);
        getchar();
        printf("\nRua do cliente: ");
        fgets(cadastro[tamanho].endereco.rua, 40, stdin);
        printf("\nBairro do cliente: ");
        fgets(cadastro[tamanho].endereco.bairro, 40, stdin);
        printf("\nCidade do cliente: ");
        fgets(cadastro[tamanho].endereco.cidade, 40, stdin);
        printf("\nEstado do cliente: ");
        fgets(cadastro[tamanho].endereco.estado, 40, stdin);
        printf("\nNúmero da casa do cliente: ");
        scanf("%d", &cadastro[tamanho].endereco.numero);
        getchar();
        printf("\nCEP do cliente: ");
        scanf("%d", &cadastro[tamanho].endereco.cep);
        getchar();
        printf("\nData de nascimento do cliente: ");
        fgets(cadastro[tamanho].dataNascimento.dataNasceu, 40, stdin);
        printf("\nCliente cadastrado!");
    }

}

void exibir(int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("Exibindo Cliente");
        printf("\nNome...........: %s", cadastro[i].nomeCliente);
        printf("\nTelefone.......: %i", cadastro[i].telefone);
        printf("\nData Nascimento: %s", cadastro[i].dataNascimento.dataNasceu);
        printf("\nRua............: %s", cadastro[i].endereco.rua);
        printf("\nBairro.........: %s", cadastro[i].endereco.bairro);
        printf("\nCidade.........: %s", cadastro[i].endereco.cidade);
        printf("\nEstado.........: %s", cadastro[i].endereco.estado);
        printf("\nNumero.........: %i", cadastro[i].endereco.numero);
        printf("\nCEP............: %i", cadastro[i].endereco.cep);
        printf("\n------------------------------\n");
    }
    
}


int main(){
    int op = 0;
    int tamanho = 0;

  do
  {
    printf("Sistema de cadastro de Aluno!");
    printf("\nInsira: \n1-Sair do programa\n2-Cadastrar aluno\n3-Exibir alunos");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        printf("Saindo do programa...");
        break;
    
    case 2:
        cadastrar(tamanho);
        tamanho = tamanho + 1;
        break;

    case 3:
        exibir(tamanho);
    
    default:
    printf("Opção invalida");
        break;
    }

  } while (op != 1);
  
}