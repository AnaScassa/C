#include <stdio.h>

int main(){

int a, b, c, delta;

calcular(a, b, c, delta);
}

void calcular(int a, int b, int c, int delta){

    printf("Insira o valor de 'A': ");
    scanf("%d", &a);

    printf("Insira o valor de 'B': ");
    scanf("%d", &b);

    printf("Insira o valor de 'C': ");
    scanf("%d", &c);

    delta = (b * b) - (4 * a * c);

    printf("Valor de delta %d", delta);

}


