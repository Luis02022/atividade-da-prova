#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	char nome[200];
	float media = 0, nota[4];
	float somatotal = 0;
    int i;
    
	printf("Digite o nome do aluno:");
	scanf("%s",&nome);
	
	for (i = 0; i < 4; i++){
		
		printf("Digite sua %iª nota:", i+1);
		scanf("%f",&nota[i]);
		
		somatotal+=nota[i]/4;
		
	}
	
	for (i = 0; i < 4; i++){
		
		printf(" %iª nota: %.1f\n", i+1, nota[i]);
		
	}
	printf("Média: %.1f\n", somatotal);
	
	if (somatotal >= 7){
		
		printf("APROVADO\n");
	}else if(somatotal >= 5 || somatotal >= 6.9){
		
		printf("RECUPERAÇÂO\n");
	}else {
		
		printf("REPROVADO\n");
	}
	
	
	
	
	
	return 0;
}
