#include<stdio.h>

int main(){

    float n1 = 1, n2 = 1, f3;

    for (int i = 0; i < 10; i++)
    {

        f3 = n1 + n2;
        printf("\n%.1f", f3);
        
        n1 = f3;
        f3 = n1 + n2;
        n2 = f3;
        printf("\n%.1f", f3);

    }
    
}

