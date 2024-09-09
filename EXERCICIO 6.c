#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e, f, g, h,i;
    int P, Q, R1, R2, T, S;

    printf("Digite o CPF :\n");

    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i);

    P = 10*a + 9*b + 8*c + 7*d + 6*e + 5*f + 4*g + 3*h + 2*i;

    R1 = P % 11;

    if (R1 < 2){
        T = 0;
        printf("O digito verificador e 0\n");

    }else if ( R1 >= 2) {

         T = 11 - R1;

        printf("O digito verificador e %d\n",T);
    }

    Q = 11*a + 10*b + 9*c + 8*d + 7*e + 6*f + 5*g + 4*h + 3*i + 2*T ;

    R2 = Q % 11;


    if (R2 < 2) {
            S = 0;
        printf("O digito verificador e 0\n");

    }else if ( R2 >= 2) {

        S = 11 - R2;

        printf("O digito verificador e %d\n",S);
    }





}


