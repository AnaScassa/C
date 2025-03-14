#include<stdio.h>

int main ()
{
    float horas, salarioHora;
    
    printf("Insira suas horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Insira seu salário por hora: ");
    scanf("%f", &salarioHora);

    if(horas > 40){
        float extra = ((horas - 40) * 1.5) * salarioHora;
        float salarioAdd = (salarioHora * horas) + extra;
        printf("Seu está com hora extra!! \n Você ganhará R$%.2f, com bonus de R$%.2f", salarioAdd, extra);
    }else{
        float salarioMensal = salarioHora * horas;
        printf("Salário mensal R$%.2f", salarioMensal);
    }

}