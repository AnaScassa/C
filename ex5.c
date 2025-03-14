#include <stdio.h>
 
int main ()
{
    int n1, n2, n3, media;
 
    printf("Insira sua primeira nota: ");
    scanf("%d", &n1);
 
    printf("Insira sua segunda nota: ");
    scanf("%d", &n2);
 
    printf("Insira sua terceira nota: ");
    scanf("%d", &n3);

    media = (n1*2 + n2*3 + n3*5)/10;

    printf("A média é %.2d", media);
    
 
    return 0;
}