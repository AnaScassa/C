#include <stdio.h>

int main (){

    int anoAtual, anoNascimento, idadeAno, idadeMeses, idadeDia, mesAtual;

    printf("Insira o ano Atual: ");
    scanf("%d", &anoAtual);

    printf("Insira o número do mes Atual: ");
    scanf("%d", &mesAtual);

    printf("Insira o ano que você nasceu: ");
    scanf("%d", &anoNascimento);

    idadeAno = anoAtual - anoNascimento;
    idadeMeses = idadeAno * 12 + mesAtual;
    idadeDia = idadeMeses * 30;

    printf("Você tem aproximadamente: %d anos, %d meses, %d dias vivo", idadeAno, idadeMeses, idadeDia);

}