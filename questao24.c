#include <stdio.h>
#include <math.h>

int main()
{
	char cc;
	float kwh, vF, vP;
	printf("digite sua classe consumidora(a, b ou c): ");
	scanf("%c", &cc);
	printf("seu consumo: ");
	scanf("%f", &kwh);
	if (cc=='a'){
		vF= kwh*0.5;
		vP= vF+(0.3*vF);
		printf("o valor a pagar e: %.2f", vP);
	} else if(cc=='b') {
		vF= kwh*0.8;
		vP= vF+(0.3*vF);
		printf("o valor a pagar e: %.2f", vP);
	} else if (cc=='c'){
		vF= kwh*1.0;
		vP= vF+(0.3*vF);
		printf("o valor a pagar e: %.2f", vP);
	} else {
	    printf("erro, a classe deve ser A, B ou C");
	}
	return 0;
}
