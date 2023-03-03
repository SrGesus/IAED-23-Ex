#include <stdio.h>
#define ALUNOS 25
#define MIN_APROV 10

int main() {
    int notas[ALUNOS], alta = 0, aprovados=0, i;
    for (i=0; i < ALUNOS; i++) {
        scanf("%d", &notas[i]);
    }
    for (i=0; i < ALUNOS; i++) {
        printf("%d ", notas[i]);
    }
    printf("\n");
    return 0;
}