#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    float delta, x1, x2, xv, yv;

    printf("Digite os coeficientes a, b e c da parabola: ");

    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);

        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raizes: x1 = %.2f, x2 = %.2f\n", x1, x2);

    } else if (delta == 0) {

        x1 = -b / (2 * a);

        printf("Raiz unica: x = %.2f\n", x1);

    } else {

        printf("Nao ha raizes reais.\n");
    }

    xv = -b / (2 * a);

    yv = a * xv * xv + b * xv + c;

    printf("Vertice: (%.2f, %.2f)\n", xv, yv);

    if (a > 0) {

        printf("Concavidade: para cima.\n");

    } else if (a < 0) {

        printf("Concavidade: para baixo.\n");

    } else {

        printf("Nao e uma parabola.\n");
    }

    return 0;
}
