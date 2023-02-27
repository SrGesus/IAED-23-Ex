#include <stdio.h>

int main() {
    int n, i;
    float min, max, valor;
    scanf("%d%f", &n, &valor);
    min = valor;
    max = valor;

    for (i = 1; i < n; i++) {
        scanf("%f", &valor);
        if (valor > max) {
            max = valor;
        }
        if (valor < min) {
            min = valor;
        }
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}