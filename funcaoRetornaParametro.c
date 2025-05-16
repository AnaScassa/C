#include<stdio.h>

float media(float n1, float n2){ // se usa float no media para quando retorna parametro
    float m;
    m = (n1 + n2)/2;
    return m; // return usado para retornar parametros
}

int main(){
    float n1, n2, m;

    printf("Entre com a nota 1: ");
    scanf("%f", &n1);

    printf("Entre com a nota 2: ");
    scanf("%f", &n2);

    m = media(n1, n2);

    printf("A média é %.2f", m);
}