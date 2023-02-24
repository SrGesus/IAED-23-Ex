#include <stdio.h>

/* Contador de valores
*/

int main() {
    int valor = 0;
    int counter = 0;
    while (valor >= 0) {
        scanf("%d", &valor);
        counter++;
    }
    printf("Counter: %d", counter);
    return 0;
}