#include <stdio.h>

int main(){
    //questão14
    int a;
    printf("digite um numero qualquer e te direi se ele e positivo, negativo ou nulo: ");
    scanf("%d\n", &a);
    if(a>0){
        printf("seu numero e positivo\n");
    } else if (a<0){
        printf("seu numero e negativo\n");
    } else {
        printf("seu numero e zero");
    }

}
