#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, x, x1, x2;
    double D;
    printf("Insira 3 numeros inteiros: ");
    scanf("%i %i %i", &a, &b, &c);
    
    if (a == 0){
        printf("a nao pode ser zero. Digite outro valor.");
        return 0;
    }
    
    D = (b*b)-4*a*c;
    
    if (D < 0){
        printf("A equacao nao possui raizes.");
    } else if (D == 0) {
        x = -b/(2*a);
        printf("Sua equacao possui apenas uma raiz: %i", x);
    } else {
        x1 =(-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);
        printf("Sua equacao possui duas raizes: %i %i", x1, x2);
    }
    
    return 0;
}
