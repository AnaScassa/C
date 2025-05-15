#include <stdio.h>

int main(){

int matriz[3][3], matriz2[3][3], matriz3[3][3];

printf("***PRIMEIRA MATRIZ***\n");
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("Entre com um valor: ");
        scanf("%i", &matriz[i][j]);
    }
}

printf("***SEGUNDA MATRIZ***\n");
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("Entre com um valor: ");
        scanf("%i", &matriz2[i][j]);

        matriz3[i][j]  = matriz[i][j] * matriz2[i][j];
    }
}

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("\nA MULTIPLICAÇÃO ENTRE AS MATRIZES DEU %d", matriz3[i][j]);
    }
}


}