#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    int temp;

    scanf("%d%d%d", &valor1, &valor2, &valor3);    
    
    if (valor1 < valor2) {
        temp = valor1;
        valor1 = valor2;
        valor2 = temp;
    }

    if (valor3 > valor1) {
        temp = valor1;
        valor1 = valor3;
        valor3 = valor2;
        valor2 = temp;
    } else {
        if (valor3 > valor2) {
            temp = valor2;
            valor2 = valor3;
            valor3 = temp;
        }
    }

    printf("%d %d %d\n", valor3, valor2, valor1);
    return 0;
}
