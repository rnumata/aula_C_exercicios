#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	/* ---------C2/Parte 4/Exercicio 4
		int num, cont, sum;
		sum = 0;
		
		for(cont=1;;){
			printf("Digite o num\n");
			scanf("%d",&num);
			if(num==0){
				break;
			} sum = sum + 1;	 
		}
		
		printf("A Somatoria é %d\n",sum);
	--------------*/	
	

	/*-------- exercicio 5 while 	
		
	float alt, peso_h, peso_m;
	char sexo;
	int count;
	
	printf("Digite altura: \n");
	fflush(stdin);
	scanf("%f",&alt);
	
	printf("Digite sexo: \n");
	fflush(stdin);
	scanf("%c",&sexo);
	
	if(sexo == 'F'){
		peso_m = (62.1*alt)-44.7;
		printf("Peso ideal para Mulher é: %.2f\n",peso_m);
	}else if (sexo == 'M') {
		peso_h = (72.7*alt)-58;
		printf("Peso ideal para homem é: %.2f\n",peso_h);
	}	
	
	count = count + 1;
	
	while (alt > 0) {
		
		printf("Digite altura: \n");
		fflush(stdin);
		scanf("%f",&alt);
		
		if(alt>0){
			printf("Digite sexo: \n");
			fflush(stdin);
			scanf("%c",&sexo);
		}else{
			break;
		} 
		
		if(sexo == 'F'){
			peso_m = (62.1*alt)-44.7;
			printf("Peso ideal para Mulher é: %.2f\n",peso_m);
		}else if (sexo == 'M') {
			peso_h = (72.7*alt)-58;
			printf("Peso ideal para homem é: %.2f\n",peso_h);
		}
		count = count + 1;
	}
		printf("Quantidade de pessoas avaliadas -> %d\n\n",count);

	----------------*/		
	
	
	/*----- Exercicio 6 while  
	
	int idade, infA = 0, infB = 0, juvA = 0, juvB = 0, adt = 0, tot = 0;
	
	printf("Digite a idade do atleta \n");
	fflush(stdin);
	scanf("%d",&idade);
	
	if(idade>0){
			if (idade>=5 && idade<=8){
				infA = infA + 1;
			} else if(idade>=8 && idade<=10){
				infB = infB + 1;
			} else if (idade>=11 && idade<=13) {
				juvA = juvA + 1;
			} else if (idade>=14 && idade<=17){
				juvB = juvB + 1;
			} else if (idade >= 18){
				adt = adt + 1;
			}
		}
	while (idade > 0){
		
		printf("Digite a idade do atleta \n");
		fflush(stdin);
		scanf("%d",&idade);
		
		if(idade>0){
			if (idade>=5 && idade<=8){
				infA = infA + 1;
			} else if(idade>=8 && idade<=10){
				infB = infB + 1;
			} else if (idade>=11 && idade<=13) {
				juvA = juvA + 1;
			} else if (idade>=14 && idade<=17){
				juvB = juvB + 1;
			} else if (idade >= 18){
				adt = adt + 1;
			}
		}else{
			break;
		}
	}
	tot = infA + infB + juvA + juvB + adt;
	printf("O Total é: %d\n",tot);
	
	--------*/
	
	/*----- Exercicio Vetores */
	
	 int num[5];
	 int cont;
	 int sum=0;
	
	/* 
	 num[0]=10;
	 num[1]=20;
	 num[2]=30;
	 num[3]=40;
	 num[4]=50;
	 */
	 
	 /*
	 printf("%d\n",num[0]);
	 printf("%d\n",num[1]);
	 printf("%d\n",num[2]);
	 printf("%d\n",num[3]);
	 printf("%d\n",num[4]);
	 
	 for(cont=0; cont <5; cont++){
		num[cont]=num[cont]*5;
		printf("Vetor %d\n",num[cont]);	
	 }
	
	*/ 
	
	/* -------- Exercicio Vetores ---- */
	
	/*
			
	for(cont=0; cont <5; cont++){
		num[cont]=num[cont]*cont;
		printf("Indice %d x Valor do Vetor= %d\n",cont, num[cont]);	
	 }	
	 
	*/	
	
	/* -------- Exercicio Vetores ---- */
	
	
	for(cont=0; cont<5; cont++){
		printf("Digite o %dº Valor: ", cont+1);
		scanf("%d", &num[cont]);
	}
	
	printf("---------------------------------------\n");
	
	for(cont=0; cont<5; cont++){
		printf("num[%d]= %d\n\n",cont, num[cont]);
		
		sum = num[cont]+sum;
	}
	
	printf("---------------------------------------\n\n");
	
	printf("A soma dos vetores é: %d\n\n", sum);
	
			
	system("pause");
	return 0;
}
