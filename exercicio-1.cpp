#include<stdio.h>
#include<locale.h>
#include<ctype.h>
//	Elabore um programa que solicite ao usuário 2 números inteiros e após
//	ele escolha uma operação para realizar: adição (A), subtração (S)
// 	multiplicação (M), divisão (D)
main(){
	setlocale(LC_ALL,"");	
	
	int num1, num2;
	char operacao;
	float calculo;
	bool erro = false;
	
	printf("Informe o primeiro número: ");
	scanf("%i", &num1);
	
	printf("\nInforme o segundo número: ");
	scanf("%i", &num2);
	
	printf("\n A - Adição");
	printf("\n S - Subtração");
	printf("\n M - Multiplicação");
	printf("\n D - Divisão");
	printf("\nInforme a letra da operação desejada: ");
	fflush(stdin);
	scanf("%c", &operacao);
	
	switch(toupper(operacao)){
		case 'A': 
			calculo = num1 + num2;
			break;
		case 'S':
			calculo = num1 - num2;
			break;
		case 'M':
			calculo = num1 * num2;
			break;
		case 'D':
			if(num2 != 0){
				calculo = (float) num1 / num2;
			}else{
				erro = true;
			}
			break;
		default: printf("\nOpção inválida!");
	}
	if(erro==false){
		printf("\nO resultado do cálculo escolhido é: %.2f", calculo);
	}else{
		printf("\nERRO! Impossível dividir por zero!");
	}
	
}
