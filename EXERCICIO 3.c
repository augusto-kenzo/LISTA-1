#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int i=1;

    printf("insira um numero inteiro e positivo:");
    scanf("%d", & a);

    while(i<=a){
        if (i % 2 == 0 && i % 3 == 0){
            printf("Pim Pam\n");
        }
        if (i % 2 == 0 && i % 3 != 0){
            printf("Pim\n");
        }
        if (i % 2 != 0 && i % 3 == 0){
            printf("Pam\n");
        }
        if (i % 2 != 0 && i % 3 != 0){
            printf("%d\n", i);
        }i++;
    }return 0;

}
