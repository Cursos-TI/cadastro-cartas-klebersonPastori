#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 10)
    {
        if(i % 2 == 0){
            printf("%d é par\n", i);
        } else {
            printf("%d é ímpar\n", i);
        }
        i++;
    }
    
int numero;

    do {
        printf("Digite um número par: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("Esse numero é par.\n");
        }else {
            printf("Esse numero é impar, tente novamente.\n");
        }

    }while (numero % 2 != 0);
    {
        printf("Obrigado por digitar um número par!\n");
    }
    

    int contador, i;
    
    printf("Tabuada, digite o numero:\n");  
    scanf("%d", &contador);

    for (i = 0; i <= 10; i++)
     {
        printf("%d x %d = %d \n", i, contador, i* contador);
     }
        return 0;
}


