#include <stdio.h>

int main (){

    float salario, salarioatual, aumento;

    printf("Insira seu salário: ");
    scanf("%f", &salario);

    aumento = salario * 0.25;
    salarioatual = salario + aumento;

    printf("Salário com aumento está em R$%.2f, com um aumento de R$%.2f", salarioatual, aumento);

}