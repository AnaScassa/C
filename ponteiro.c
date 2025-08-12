
#include <stdio.h>

void alterar(int *px, int *py){ // mando dois parametros precisa receber de volta
    *px = 3;
    *py = 5;
}

int main()
{
    int k = 10;
    int *p = &k;  // 'p' é um ponteiro para inteiro que guarda o endereço de 'x'
    printf("%d", *p);  // Imprime o valor de 'x' usando o ponteiro (10)

    int x,y;
    alterar(&x, &y); // por aqui que passa os valores de x e y
    printf("\nO primeiro e %i, o segundo e %i.",x,y);
}

//Em vez de guardar um valor direto (como um número), 
//o ponteiro guarda o local na memória onde esse valor está armazenado.

//Isso permite acessar e manipular dados indiretamente, 
//além de facilitar a criação de estruturas dinâmicas como listas e árvores.

