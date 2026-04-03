#include <stdio.h>

int main(){
int x;
int y;
int quociente, resto;
    printf("digite um número: ");
    scanf("%d", &x);
    printf("digite outro número: ");
    scanf("%d", &y);
    quociente= x/y;
    resto= x%y;
    printf("quociente:%d", quociente);
    printf("resto:%d", resto);

}
