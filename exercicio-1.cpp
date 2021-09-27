#include<stdio.h>
#include<locale.h>
#include<ctype.h>
//	Elabore um programa que solicite ao usu�rio 2 n�meros inteiros e ap�s
//	ele escolha uma opera��o para realizar: adi��o (A), subtra��o (S)
// 	multiplica��o (M), divis�o (D)
main(){
	setlocale(LC_ALL,"");	
	
	int num1, num2;
	char operacao;
	float calculo;
	bool erro = false;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &num1);
	
	printf("\nInforme o segundo n�mero: ");
	scanf("%i", &num2);
	
	printf("\n A - Adi��o");
	printf("\n S - Subtra��o");
	printf("\n M - Multiplica��o");
	printf("\n D - Divis�o");
	printf("\nInforme a letra da opera��o desejada: ");
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
		default: printf("\nOp��o inv�lida!");
	}
	if(erro==false){
		printf("\nO resultado do c�lculo escolhido �: %.2f", calculo);
	}else{
		printf("\nERRO! Imposs�vel dividir por zero!");
	}
	
}
