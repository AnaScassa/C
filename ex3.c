#include <stdio.h>

int main (){

    float gasolina = 6.36;
    float alcool = 4.13;
    float litros, desconto;
    int escolha, escolha2;

    printf("Qual o combustivel deseja usar? \n1 = GASOLINA \n2 = ALCOOL \n");
    scanf("%d", &escolha);


   if (escolha == 1){
        printf("O valor da Gasolina está por %.2f , deseja mudar? \n Digite '1' para mudar: ", gasolina); 
        scanf("%d", &escolha2);

        if(escolha2 == 1){
            printf("Insira o novo valor para a gasolina: ");
            scanf("%f", &gasolina);
           }
    } else if (escolha == 2){
        printf("O valor do Alcool está por %.2f , deseja mudar? \n Digite '1' para mudar", alcool); 
        scanf("%d", &escolha2);
    
          if(escolha2 == 1){
         printf("Insira o novo valor para a gasolina: ");
         scanf("%f", &alcool);
        }
    } else {
        printf("Número invalido!");
    }

    switch (escolha)
    {
    case 1:

     printf("Quantos litros vai colocar?: ");
     scanf("%f", &litros);

    if(litros >= 1 && litros <= 20){
        desconto = (litros * gasolina) - ((litros * gasolina) * 0.04);
        printf("O valor a se pagar é %.2f ", desconto);
    } else if (litros > 20){
        desconto = (litros * gasolina) - ((litros * gasolina) * 0.06);
        printf("O valor a se pagar é %.2f ", desconto);
    } else {
        printf("Valor invalido");
    }
        break;
    
    case 2:

  printf("Quantos litros vai colocar?");
  scanf("%f", &litros);

  if(litros >= 1 && litros <= 20){
    desconto = (litros * alcool) - ((litros * alcool) * 0.03);
    printf("O valor a se pagar é %.2f ", desconto);
} else if (litros > 20){
    desconto = (litros * alcool) - ((litros * alcool) * 0.05);
    printf("O valor a se pagar é %.2f ", desconto);
} else {
    printf("Valor invalido");
}
    
    break;
    default:
    printf("Saindo...");
        break;
    }

}