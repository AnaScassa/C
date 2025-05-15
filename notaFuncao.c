#include <stdio.h>

int main(){

int media;
printf("Insira a sua media: ");
scanf("%d", &media);

calcular(media);
}

void calcular(int media){

if(media < 5){
    printf("Conceito D");
}else if(media >= 5 && media < 7){
    printf("Conceito C");
}else if(media >= 7 && media < 9 ){
    printf("Conceito B");
}else {
    printf("Conceito A");
}

}


