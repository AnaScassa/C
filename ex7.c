#include<stdio.h>

int main (){

    int numeroConta;
    float saldo, debito, credito;

    printf("Insira o Número da conta: ");
    scanf("%d", &numeroConta);

    printf("Insira o Débito da conta: ");
    scanf("%f", &debito);

    printf("Insira o Crédito da conta: ");
    scanf("%f", &credito);

    printf("Insira o SALDO da conta: ");
    scanf("%f", &saldo);

    float saldoAtual = saldo - debito + credito;

    if(saldoAtual < 0){
        printf("Saldo Atual de %.2f, está NEGATIVO!", saldoAtual);
    } else {
        printf("Saldo atual de %.2f, está POSITIVO!", saldoAtual);
    }
}