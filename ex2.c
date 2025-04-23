#include <stdio.h>
#define PI 3.14159

int main(void) {
    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float total = PI * raio * raio;

    printf("Raio: %f\n", total);

    return 0;
}