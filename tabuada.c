#include<stdio.h>

int main(){

    float n1, n2;
    float multiplicar, contagem ;

    while (n2 != 2)
    {
        tabuada(n1, multiplicar, contagem);

        printf("\nDeseja continuar? 1- Sim 2- Não: ");
        scanf("%f", &n2);
    }
    
}

void tabuada(float n1, float multiplicar, float contagem){
    contagem = -1;
    printf("Insira o número: ");
    scanf("%f", &n1);

    for (int i = 0; i < 11; i++)
    {
        multiplicar = 0;
        multiplicar = n1 * i;
        contagem++;

        printf("\n%.1f X %.1f = %.1f", n1, contagem, multiplicar);
    }
}
