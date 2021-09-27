#include<stdio.h>
#include<locale.h>
#define JUROS 0.01
//	Suponha que você atrasou uma conta. A cada mês de atraso,
//	será cobrado 1% de juros no valor inicial. Você pode atrasar,
//	no máximo, 5 meses. O programa pede como entrada o valor da dívida inicial
//	e a quantidade de meses de atraso. Faça um programa em C que calcula 
//	os juros. Use switch e case acumulados e apenas 1 comando break!
main(){
	setlocale(LC_ALL,"");

	float divida, juros;
	int meses;
	
	printf("Informe o valor da sua dívida: R$");
	scanf("%f", &divida);
	
	printf("\nInforme o número de meses que está atrasado: ");
	scanf("%i", &meses);
	
	if(meses < 0 || meses > 5){
		printf("\nProcure o setor financeiro");
	}else{
		switch(meses){
			case 5:
				juros+=JUROS;
			case 4:
				juros+=JUROS;
			case 3:
				juros+=JUROS;
			case 2:
				juros+=JUROS;
			case 1:
				juros+=JUROS;
		}
		printf("\nJuros a pagar: R$%.2f", (divida*juros));
		printf("\nDívida total: R$%.2f", (divida*juros)+divida);
	}
	
}
