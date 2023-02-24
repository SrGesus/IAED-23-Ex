#include <stdio.h>

/*
*/

int main() {
    int nota = 0, aprovados = 0, reprovados = 0, counter = 0;
    while(nota >= 0) {
        scanf("%d", &nota);
        if (nota >= 10) {
            aprovados++;
        } else {
            reprovados++;
        }
        counter++;
    }
    printf("Total de Notas: %d\nAprovações: %d \nReprovações: %d", counter, aprovados, reprovados);
    return 0;
}