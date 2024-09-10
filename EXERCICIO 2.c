#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, primo = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("O numero nao e primo.\n");
        return 0;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("O numero %d e primo.\n", n);
    } else {
        printf("O numero %d nao e primo.\n", n);
        printf("Divisores de %d: 1", n);
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                printf(", %d", i);
            }
        }
        printf("\n");
    }

    return 0;
}

