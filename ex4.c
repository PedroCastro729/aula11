#include <stdio.h>

int main(void) {
    int valor[3];

    for(int i = 0; i < 3; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &valor[i]);
    }

    int soma = valor[0] + valor[1] + valor[2];

    printf("%d\n", soma);

    return 0;
}