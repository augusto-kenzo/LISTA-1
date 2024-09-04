#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e, f, g, h;
    int P, R, Q;

    printf("Digite o RG :\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h);

    P = 2*a + 3*b + 4*c + 5*d + 6*e + 7*f + 8*g + 9*h;

    R = P % 11;//calcula o resto de P

    Q = 11 - R;//11 - o resto da o digito verificador

    if (Q == 10) {
        printf("O digito verificador e X\n");

    } else if (Q == 11) {
        printf("O digito verificador e 0\n");

    } else {
        printf("O digito verificador e %d\n", Q);
    }

    return 0;
}
