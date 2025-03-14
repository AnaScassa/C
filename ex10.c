#include<stdio.h>

int main (){

    float comprimento, largura, altura, volume;

    printf("Insira o comprimento da caixa: ");
    scanf("%f", &comprimento);

    printf("Insira a largura da caixa: ");
    scanf("%f", &largura);

    printf("Insira a altura da caixa: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume é %.2f", volume);
}