#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int numeros [6];
	int i, pares = 0, impares = 0;
	
	for (i = 0 ; i < 6; i++){
	printf("%iª Digite um número:", i+1);
	scanf("%i", &numeros[i]);
	
	if (numeros[i] % 2 == 0 ){
		pares++;
	}else{
		
		impares++;
	}
	
	}
	
	system("cls");
	
	for (i = 0; i < 6; i++){
		printf("Número digitado: %i\n", numeros[i]);
		
	}
	
	printf("Quantidade de números pares: %i\n", pares);
	printf("Quantidade de números imapares: %i\n", impares);
	
 
}
