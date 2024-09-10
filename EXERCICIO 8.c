#include <stdio.h>

int main() {
    int n, i = 0;
    int binario[32];

    printf("Digite um numero inteiro ate 32: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("A representacao binaria de 0 e: 0\n");
        return 0;
    }

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("A representacao binaria e: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
    printf("\n");

    return 0;
}

