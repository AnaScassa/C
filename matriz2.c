#include <stdio.h>

int main(){

int matriz[3][3];
int nMaior, nMenor;

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf("Entre com um valor: ");
        scanf("%i", &matriz[i][j]);
    }
}

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        if(matriz[i][j] > 0){
            nMaior++;
        } else {
            nMenor++;
        }
    }
}

printf("OS NÚMEROS MAIORES QUE 0 NA MATRIZ SÃO %d, e os menores são %d", nMaior, nMenor);

}