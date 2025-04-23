#include <stdio.h>

int main(void) {
    float nota[4];
    float total = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota[0]);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota[1]);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota[2]);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota[3]);

    for(int i = 0; i < 4; i++) {
        total += nota[i];
    }

    printf("%.2f\n", total);

    return 0;
}