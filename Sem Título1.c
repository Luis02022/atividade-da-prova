#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"");
	//Declarando variáveis
	int  idade, telefone;
	char nome[200], email[200];
	int opcao;
	
	
	printf("Digite seu e-mail:");
	scanf("%s",&email);
		
	printf("Digite seu nome:");
	scanf("%s",&nome);
	
	printf("Digite sua idade:");
	scanf("%i",&idade); 
	 
	printf("Digite seu telefone:");
	scanf("%i",&telefone);
	
	printf("Escolha ma opção para exibir os dados:");
	scanf("%i",&opcao);
		
		
	system("cls");
	
	
	switch (opcao){
		
	case 1:
	printf("Nome: %s\n", nome);
    printf("Idade: %i\n", idade);
	
	break;
	
    case 2:
    	
    printf("Nome: %s\n", nome);
    printf("Email: %s\n", email);
	
	break;	
    	
	case 3:
		
	printf("Nome: %s\n",&nome);
	printf("Telefone: %i\n",&telefone);
	
	break;
	
	case 4:
		
	printf("Nome: %s\n", nome);
	printf("Idade: %i\n", idade);
	printf("Telfone: %i\n", telefone);
	printf("E-mail: %s\n", email);
		
	break;
		
	default:
	printf("Opção inválida\n");		
		
	}
	
	
	
	return 0;
}

