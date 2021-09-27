#include<stdio.h>
#include<locale.h>
//	Crie um programa que receba um número inteiro, de 1 até 12, representando
//	os meses do ano e retorne o número de dias do mês. Use switch e apenas
//	DOIS comandos break.
main(){
	setlocale(LC_ALL,"");
	
	int mes;
	
	printf("Informe um número de 1 a 12: ");
	scanf("%i", &mes);
	
		if(mes >= 1 && mes <= 12){
			switch(mes){
				case 2:
					printf("\n O mês %i tem 28 ou 29 dias", mes);
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					printf("\n O mês %i tem 30 dias", mes);
					break;
			default: printf("\n O mês %i tem 31 dias", mes);
			}
		}else{
			printf("\n Opção inválida!");
		}
	}

