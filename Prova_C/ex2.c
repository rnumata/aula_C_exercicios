#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>


int main () {
	setlocale(LC_ALL,"");
	
	int i, id = 0, idade, contA = 0, contE = 0;
	float nota, sumNota, media = 0;
	
	
	printf("Digite o Numero de Identificacao ou 0 para sair: ");
	scanf("%d", &id);
	
	while (id > 0){
	
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
			
	for(i=0; i<12; i++){
		printf("Digite a %da nota:  ", i+1);
		scanf("%f", &nota);
		sumNota = (sumNota + nota); 
	}

	sumNota = (sumNota/12);
	
	
	//system("cls");
	printf("\n\nId Aluno => %d\n", id);
	printf("Media do Aluno =>%.2f\n", sumNota);				
	
	
	if(sumNota < 40){
		printf("Conceito => E\n\n");
		contE = contE + 1;
	} else if (sumNota < 60){
		printf("Conceito => D\n\n");
	} else if (sumNota <75){
		printf("Conceito => C\n\n");
	} else if (sumNota <90){
		printf("Conceito => B\n\n");
	} else {
		printf("Conceito => A\n\n");
		contA = contA + 1;
	}

	printf("Digite o Numero de Identificacao ou 0 para sair: ");
	scanf("%d", &id);

}
		
 	printf("Quantidade de conceito A => %d\n", contA);
 	printf("Quantidade de conceito E => %d\n", contE);
 	
			
				
	return (0);
    system("pause");
}
