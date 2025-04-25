#include<stdio.h>

void somar(){ // void é um tipo de dado que indica algo nulo
// nao retorna parametros    

    float n1, n2;

    printf("Soma de valores");
    printf("Entre com n1: ");
    scanf("%f", &n1);
    printf("Entre com n2: ");
    scanf("%f", &n2);

    printf("\nSoma: %.2f \n", n1+n2);

}   
// toda variavél dentro de um void só existe dentro dela

void multiplicar(){
    
    float n1, n2;

    printf("Soma de valores");
    printf("Entre com n1: ");
    scanf("%f", &n1);
    printf("Entre com n2: ");
    scanf("%f", &n2);

    printf("\nSoma: %.2f \n", n1 * n2);

} 

void subtrair(){
    
    float n1, n2;

    printf("Soma de valores");
    printf("Entre com n1: ");
    scanf("%f", &n1);
    printf("Entre com n2: ");
    scanf("%f", &n2);

    printf("\nSoma: %.2f \n", n1 - n2);

} 

void dividir(){
    
    float n1, n2;

    printf("Soma de valores");
    printf("Entre com n1: ");
    scanf("%f", &n1);
    printf("Entre com n2: ");
    scanf("%f", &n2);

    printf("\nSoma: %.2f \n", n1 / n2);

} 

int main (){

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
    switch(op){
        case 1: somar(); break;
        case 2: multiplicar(); break;
        case 3: subtrair(); break;
        case 4: dividir(); break;
        case 5: exit(1);
        default: printf("\nOpção Invalida");
    }
    }
}

