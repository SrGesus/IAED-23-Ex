#include <stdio.h>

int n_divisores(int n) {
    int i, counter = 0;
    for (i = 1; i <= n; i++) {
        if (n % i) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n_divisores(n));
    return 0;
}