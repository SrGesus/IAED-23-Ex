#include <stdio.h>
#define VECMAX 100

int main() {
    int n, valores[100], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < valores[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}