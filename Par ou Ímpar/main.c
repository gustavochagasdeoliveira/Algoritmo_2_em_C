#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	if(numero % 2 == 0)
		printf("O numero informado e Par\n");
	else
		printf("O numero e informado e Impar\n");
	return 0;
}
