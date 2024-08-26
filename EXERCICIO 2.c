#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, n;

    printf("digite o numero inicial:");
    scanf("%d",&n);
    if(n<=1){
        printf("não é primo");
    }else{
        for (i=2; i < n; i++){
            if(n%i==0){
                printf("nao e primo");
                break;
            }
        }
        if(i==n){

            printf("e primo");
        }

    }
    return 0;
}
