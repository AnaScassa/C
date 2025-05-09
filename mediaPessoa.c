#include<stdio.h>

int main(){

    float filhos, salario, maiorSalario, mediaFilhos, mediaSalario;

    calculo(filhos, salario, maiorSalario, mediaFilhos, mediaSalario);
   
}

void calculo(float filhos, float salario, float maiorSalario, float mediaFilhos, float mediaSalario){
    maiorSalario = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Insira o salário: ");
        scanf("%f", &salario);

        printf("Insira o número de filhos: ");
        scanf("%f", &filhos);

        if(salario > maiorSalario){
            maiorSalario = salario;
        }

        mediaFilhos = mediaFilhos + filhos;
        mediaSalario = mediaSalario + salario;
    }

    mediaFilhos = mediaFilhos / 6;
    mediaSalario = mediaSalario / 6;

    printf("\nO maior salário foi %.2f \n A média dos salários foi %.2f \n A média de filhos foi %.1f", maiorSalario, mediaSalario, mediaFilhos);
    
}