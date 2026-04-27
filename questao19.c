
#include <stdio.h>

int main(){
//questao19
    int a, b, c;
    printf("Digite 3 números inteiros: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a > b && a > c){
        printf("O maior numero digitado eh: %d", a);
    } else if (b > c){
        printf("O maior numero digitado eh: %d", b);
    } else {
        printf("O maior numero digitado eh: %d", c);
    }
}
