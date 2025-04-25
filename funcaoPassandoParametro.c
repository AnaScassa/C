#include<stdio.h>

void somar(float n1,float  n2){ 

    printf("\nSoma: %.2f \n", n1+n2);
}   

void multiplicar(float n1,float  n2){

    printf("\nSoma: %.2f \n", n1 * n2);
} 

void subtrair(float n1, float n2){

    printf("\nSoma: %.2f \n", n1 - n2);
} 

void dividir(float n1, float n2){

    printf("\nSoma: %.2f \n", n1 / n2);
} 

int main (){

    float n1, n2;
    int op = 0;
    while(op != 3){
    printf("\nMini - Calculadora");
    printf("\nDigite 1 para somar");
    printf("\nDigite 2 para Multiplicar");
    printf("\nDigite 3 para Subtrair");
    printf("\nDigite 4 para Dividir");
    printf("\nDigite 5 para sair");
    printf("\nInsira o número: ");
    scanf("%i", &op);
    
    switch(op){ // passando o n1 e o n2 por parametro
        case 1: 
        printf("Soma de valores");
        printf("Entre com n1: ");
        scanf("%f", &n1);
        printf("Entre com n2: ");
        scanf("%f", &n2);    
        somar(n1, n2); break; 
        case 2: 
        printf("Soma de valores");
        printf("Entre com n1: ");
        scanf("%f", &n1);
        printf("Entre com n2: ");
        scanf("%f", &n2);    
        multiplicar(n1, n2); break;
        case 3: 
        printf("Soma de valores");
        printf("Entre com n1: ");
        scanf("%f", &n1);
        printf("Entre com n2: ");
        scanf("%f", &n2);    
        subtrair(n1, n2); break;
        case 4: 
        printf("Soma de valores");
        printf("Entre com n1: ");
        scanf("%f", &n1);
        printf("Entre com n2: ");
        scanf("%f", &n2);    
        dividir(n1, n2); break;
        case 5: exit(1);
        default: printf("\nOpção Invalida");
    }
    }
}

