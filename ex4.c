#include<stdio.h>

int main (){

    float c, f;

    printf("Quantos Graus está em Celsius: ");
    scanf("%f", &c);

    f = c * 1.8 + 32;

    printf("A temperatura está %.2f em fahrenheit", f);
}