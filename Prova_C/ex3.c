#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

	struct estagiario {
    	int codigo;
    	char nome [10];
    	int nasc;
    	float salMes [12];
    	float salAno;
	};



int main () {
	setlocale(LC_ALL,"");
	
	int i, c;
	float salAno = 0;
	
	struct estagiario estag [60];	
	
	for (i=0; i<60; i++){
		
		fflush(stdin);
	    printf("Informe o Código:  ");
	    scanf("%d", &estag[i].codigo);
		
		fflush(stdin);
	    printf("Informe o Nome:  ");
	    gets(estag[i].nome);
	    
	    fflush(stdin);
	    printf("Informe o Ano de Nasc:  ");
	    scanf("%d", &estag[i].nasc);
	    
	    for(c=0; c<=11; c++){
	    	fflush(stdin);
	    	printf("Informe o %do Salario:  ", c+1);
	    	scanf("%.2f", &estag[i].salMes[c]);
	    	salAno = salAno + estag[i].salMes[c];
		}
		
	}

	
	for(i=0; i<2; i++){
		printf("Codigo: %d\n", estag[i].codigo);
		printf("Nome: %s\n", estag[i].nome);
		printf("Ano Nasc: %d\n", estag[i].nasc);
			
	}			


				
	return (0);
    system("pause");
}
