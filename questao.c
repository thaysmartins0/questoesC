#include <stdio.h>
int main() {
    int idade, i;
    int maiores = 0; 

    for (i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade >= 18) {
            maiores = maiores + 1;
        }
    }
    printf("A quantidade de pessoas maiores de idade e: %d\n", maiores);

}
