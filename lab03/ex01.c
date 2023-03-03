#include <stdio.h>

void quadrado(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i; j < i+n; j++) {
            printf("%d", j+1);
            if (j < i+n-1)
                putchar('\t');
        }
        putchar('\n');
    }
}

int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}