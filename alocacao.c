#include <stdio.h>

float media(int n, float *v){
    
    int i;
    float s = 0.0f;
    for(i=0; i < n; i++){
        s += v[i];
    }
    return s/n;
}

int main()
{
    int c = 1;
    do
    {
        int i , n;
        float *v, med;
        printf("\nQuantas notas serao lidas: ");
        scanf("%i", &n);
        v = (float*)malloc(n*sizeof(float)); //Malloc faz alocação de memória
        //Malloc vai contar qnt vai precisar alocar na memória
        if(v == NULL){
            printf("Memoria Insuficiente");
            return 1;
        } else {
            for(i=0; i<n; i++){
                printf("\nEntre com a nota %i: ", i);
                scanf("%f", &v[i]);
            }
            med = media(n,v);
            printf("\nMedia: %2.f", med);
            free(v);
        

        printf("\nDeseja continuar? 1- Sim / 2- Não: ");
        scanf("%i", &c);
    }    } while (c != 1);
    
    printf("Desligando o programa...");
    

    
    return 0;

}
