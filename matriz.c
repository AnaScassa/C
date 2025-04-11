#include <stdio.h>

int main(){

int matriz[3][2];

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
        printf("Entre com um valor: ");
        scanf("%i", &matriz[i][j]);
    }
}

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
        printf("tabela[%d][%d] = %.2d\n", i, j, matriz[i][j]);
    }
}

}