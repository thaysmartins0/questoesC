#include <stdio.h>
int main(){
//questao18
    float a;
    printf("digite a quantidade inteira de macas que voce deseja comprar para saber o total da sua compra: \n");
    scanf("%f", &a);

    if (a< 12){
        printf("O total da sua compra foi: %.2f", a*0.30);
    } else {
        printf("O total da sua compra foi: %.2f", a*0.25);
    }

    return 0;
}
