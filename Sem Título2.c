#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int numeros [6];
	int i, pares = 0, impares = 0;
	
	for (i = 0 ; i < 6; i++){
	printf("%i� Digite um n�mero:", i+1);
	scanf("%i", &numeros[i]);
	
	if (numeros[i] % 2 == 0 ){
		pares++;
	}else{
		
		impares++;
	}
	
	}
	
	system("cls");
	
	for (i = 0; i < 6; i++){
		printf("N�mero digitado: %i\n", numeros[i]);
		
	}
	
	printf("Quantidade de n�meros pares: %i\n", pares);
	printf("Quantidade de n�meros imapares: %i\n", impares);
	
 
}
