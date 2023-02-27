#include <stdio.h>

int main() {
    int valor1, valor2;
    scanf("%d%d", &valor1, &valor2);
    if (valor1 % valor2) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    return 0;
}