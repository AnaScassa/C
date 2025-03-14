#include <stdio.h>
 
int main(){
    int n, a, b, c, ordemDecrescente, maiorMeio, ordemCrescente;
 
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
 
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
 
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);
 
    printf("\n 1 Para ordem crescente \n 2 para ordem decrescente \n 3 para deixar o maior no meio\n");
    scanf("%d", &n);
 
    switch (n)
    {
    case 1:
        if(a>b && a > c && b>c)
    {
            printf("Ordem crescente: %d %d %d", c , b , a);
        } else if (a>b && a > c && c>b){
            printf("Ordem crescente: %d %d %d", b , c , a);
        } else if (b>a && b > c && a>c){
            printf("Ordem crescente: %d %d %d", c , a , b);
        } else if (b>a && b > c && c>a){
            printf("Ordem crescente: %d %d %d", a , c , b);
        } else if (c>a && c > b && a>b){
            printf("Ordem crescente: %d %d %d", b , a , c);
        } else if (c>a && c > b && b>a){
            printf("Ordem crescente: %d %d %d", a , b , c);
       
        }
        break;
   
    default:
        break;
 
    case 2:
       if (a<b && a<c && b<c){
              printf("Ordem decrescente: %d %d %d", c, b, a);
           
       }
         else if (a<b && a <c && c<b){
            printf("Ordem decrescente: %d %d %d", b, c, a);
        }
 
        else if (a>b && a <c && b<c){
            printf("Ordem decrescente: %d %d %d", b, a, c);
        }
 
        else if (a>b && a<c && c>b){
            printf("Ordem decrescente: %d %d %d", c, a, b);
        }
        else if (a>b && a>c && b<c){
            printf("Ordem decrescente: %d %d %d", a, c, b);
        }
        else if (a>b && a >c && b>c){
            printf("Ordem decrescente: %d %d %d", a, b, c);
        }
 
        break;
       
    case 3:
     
    if(a > b && a > c ){
        printf("Maior no Meio: %d %d %d", a, b, c);
 
    }
    else if (a < b && b > c){
        printf("Maior no Meio: %d %d %d", a, b, c);
 
}
    else if (a < b && b < c){
        printf("Maior no Meio: %d %d %d", a, c, b);
    }
    break;
 
    }
 
 
 
}