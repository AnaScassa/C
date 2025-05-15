#include <stdio.h>

int main(){

int idade;
printf("Insira a sua idade: ");
scanf("%d", &idade);

calcular(idade);
}

void calcular(int idade){

if(idade <= 4){
    printf("Idade insuficiente");
}else if(idade > 4 && idade <= 7){
    printf("Infantil A");
}else if(idade > 7 && idade < 11 ){
    printf("Infantil B");
}else if(idade >= 11 && idade <= 13){
    printf("Juvenil A");
}else if(idade > 13 && idade <= 17){
    printf("Juvenil B");
}else {
    printf("Adulto");
}

}


