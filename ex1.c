#include <stdio.h>
 
int main()
{
    float sexo, altura, resultado;

 
    printf("Insira seu genero - '1' para Homem / '2' para Mulher: ");
    scanf("%f", &sexo);
    printf("\n Insira sua altura: ");
    scanf("%f", &altura);

    if(sexo == 1){
        resultado = (72.7 * altura) - 58;
        printf("O peso ideial é %f", resultado);
    }else if (sexo == 2) {
        resultado = (62.1 * altura) - 44.7;
        printf("O peso ideal é %f", resultado);
    } else {
      printf("Genero invalido!");
    }
}