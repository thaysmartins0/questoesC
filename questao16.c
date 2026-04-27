#include <stdio.h>

int main(){
    //questao16
    int a;
    printf("digite um valor inteiro: ");
    scanf("%d", &a);
    if(a>=0){
        printf(" opa seu valor %d e positivo", a);
    } else {
        printf("opa seu valor era negativo, foi invertido e agora eh:%d", a*-1);
    }

}
