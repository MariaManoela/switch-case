#include<stdio.h>
#include<locale.h>
//	Crie um programa que receba um n�mero inteiro, de 1 at� 12, representando
//	os meses do ano e retorne o n�mero de dias do m�s. Use switch e apenas
//	DOIS comandos break.
main(){
	setlocale(LC_ALL,"");
	
	int mes;
	
	printf("Informe um n�mero de 1 a 12: ");
	scanf("%i", &mes);
	
		if(mes >= 1 && mes <= 12){
			switch(mes){
				case 2:
					printf("\n O m�s %i tem 28 ou 29 dias", mes);
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					printf("\n O m�s %i tem 30 dias", mes);
					break;
			default: printf("\n O m�s %i tem 31 dias", mes);
			}
		}else{
			printf("\n Op��o inv�lida!");
		}
	}

