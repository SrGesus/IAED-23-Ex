#include <stdio.h>
#define true 1
#define false 0

void handle_char(int c, int *encontrado_nao_zero) {
    switch (c) {
        case ' ':
        case '\n':
            if (*encontrado_nao_zero) {
                *encontrado_nao_zero = false;
            } else {
                putchar('0');
            }
            putchar(c);
            break;
        case '0':
            if (*encontrado_nao_zero)
                putchar(c);
            break;
        default:
            *encontrado_nao_zero = true;
            putchar(c);
    }
}

int main() {
    int c;
    int encontrado_nao_zero = false;
    c = getchar();
    while(c != EOF) {
        handle_char(c, &encontrado_nao_zero);
        c = getchar();
    }
    return 0;
}