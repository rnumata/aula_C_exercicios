
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>



// prototipo de funÃ§Ã£o
int linearsearch(int a[], int key, int size);


// Definição de Struct

struct imovel {
    	int cadastro;
    	float vlrImposto;
    	int qtdeAtraso;
    	float vlrMulta;
	};


/*
 * 
 */
int main() {
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
		
		printf("A Somatoria ï¿½ %d\n",sum);
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
		printf("Peso ideal para Mulher ï¿½: %.2f\n",peso_m);
	}else if (sexo == 'M') {
		peso_h = (72.7*alt)-58;
		printf("Peso ideal para homem ï¿½: %.2f\n",peso_h);
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
			printf("Peso ideal para Mulher ï¿½: %.2f\n",peso_m);
		}else if (sexo == 'M') {
			peso_h = (72.7*alt)-58;
			printf("Peso ideal para homem ï¿½: %.2f\n",peso_h);
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
	printf("O Total ï¿½: %d\n",tot);
	
	--------*/
	
	/*----- Exercicio Vetores */
	
	/*
	 int num[5];
	 int cont;
	 int sum=0;
	*/
	
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
	
	/*
	for(cont=0; cont<5; cont++){
		printf("Digite o %dï¿½ Valor: ", cont+1);
		scanf("%d", &num[cont]);
	}
	
	printf("---------------------------------------\n");
	
	for(cont=0; cont<5; cont++){
		printf("num[%d]= %d\n\n",cont, num[cont]);
		
		sum = num[cont]+sum;
	}
	
	printf("---------------------------------------\n\n");
	
	printf("A soma dos vetores ï¿½: %d\n\n", sum);
	*/
	
	/* -------- Exercicio Vetores ---- */
	
	/*
	int lanc [10];
	int res [7] = {0};
	int i;
	
	for (i=0; i<10; i++){
		printf("Digite o %dï¿½ numero", i+1);
		scanf("%d", &lanc[i]);
	}
	
	
	for (i=0; i<10; i++){
		++res[lanc[i]];
	}

	for (i=0; i<7; i++){
		printf("res[%d] = %d\n",i ,res[i]);
	}
	*/
	
	/* -------- Exercicio Vetores ---- 
	
	int mat [3];
	int nMat, i;
	
	for (i=0; i<3; i++){
		printf("Digite a %dï¿½ Matrï¿½cula\n", i+1);
		scanf("%d", &mat[i]);
	}
	
	printf("Qual Matricula a ser consultada?\n\n");
	scanf("%d", &nMat);
	
	/* Primeira opï¿½ï¿½o 
	for(i=0; i<3; i++){
		if(mat[i] == nMat){
			break;
		}
	}
	
	if(i == 3){
		printf("Aluno Nï¿½O Matriculado\n");
	} else {
		printf("Aluno Matriculado\n");
	}
	*/
	
	/* Segunda Opï¿½ï¿½o 
	for(i=0; i<3; i++){
		if(mat[i] == nMat){
			break;
		}
	}
	
	if(i == 3){
		printf("Aluno Nï¿½O Matriculado\n");
	} else {
		printf("Aluno Matriculado\n");
	}
	*/
	
	/* -------- Exercicio Matrizes ----*/ 
	/*
	int l, c, tot1 = 0, tot2 = 0 ;
	int matriz1 [5][3];
	int matriz2 [5][3];
	int matriz3 [5][3];
	
        // Popular 1a Matriz 
	for(l=0; l<5; l++){
            for(c=0; c<3; c++){
		printf("Matriz 1 %da Linha e %da Coluna:", l+1, c+1);
            scanf("%d", &matriz1[l][c]);
			tot1 = tot1 + matriz1[l][c];
		}	
	}
        printf("*************************************\n");
        
        // Popular 2a Matriz         
        for(l=0; l<5; l++){
            for(c=0; c<3; c++){
		printf("Matriz 2 %da Linha e %da Coluna:", l+1, c+1);
            scanf("%d", &matriz2[l][c]);
			tot2 = tot2 + matriz2[l][c];
		}	
	}
        
        // Popular 3a Matriz 
        for(l=0; l<5; l++){
            for(c=0; c<3; c++){
                matriz3 [l][c] = matriz1[l][c] + matriz2[l][c];
            }
        }
        
        
        printf("\n");
        printf("****** MATRIZ 1 *******\n");
        
        for(l=0; l<5; l++){
            for(c=0; c<3; c++){
                printf("%6d", matriz1[l][c]);
            }
            printf("\n");
	}
        printf("\n"); 
        printf("****** MATRIZ 2 *******\n");
        
        for(l=0; l<5; l++){
            for(c=0; c<3; c++){
                printf("%6d", matriz2[l][c]);
            }
            printf("\n");
	}
	
        printf("\n");
        printf("****** MATRIZ 3 *******\n");
        for(l=0; l<5; l++){
            for(c=0; c<3; c++){
                printf("%6d", matriz3[l][c]);
            }
            printf("\n");
        }
        
        printf("\n");
     */   
         
	
    /* -------- Exercicio Array (encontrar valor no vetor) ----*/ 
    /*
    int a[] = {2, 4, 6, 8, 10};
    int x, searchkey, element;
    
    printf("Digite o valor: \n");
    scanf("%d",&searchkey);
    
    element = linearsearch (a, searchkey, 5);
    
    if(element != 0){
        printf("Valor %d encontrado na lista\n", element);
    }else{
        printf("Valor NÃO encontrado na lista");
    }
    */
    
    /* -------- Exercicio Matrizes exercicio 14 ----*/ 
    /*
    int l, c;
	int matriz [5][3];

    // Popular a Matriz
    
    for(l=0; l<5; l++){
    	for(c=0; c<3; c++){
    		printf("Informe a nota %d da disciplina %d: \n ", l, c);
    		scanf("%d", &matriz[l][c]);
		}
	}
   */ 
   
        
    /* ----------- String em C -------- */
    /*
     char strTeste [20];

	printf("Informe seu nome");
	gets(strTeste);				// comando para ler string
	printf("%s", strTeste);    // imprime o vetor de char strTeste
    printf("%c", strTeste[5]); // imprime a posição 5
    */
    
    
    /*---------- Exercicio Struct-------------- */
    /*
    float multa = 50;
    float vlrTotal;
    
    struct imovel imovel;
    
    fflush(stdin);
    printf("Informe Nº do Imovel:  ");
    scanf("%d", &imovel.cadastro);
    
    fflush(stdin);
    printf("Informe o Valor do imposto R$:  ");
    scanf("%f", &imovel.vlrImposto);
    
    fflush(stdin);
    printf("Informe a qtde de meses em atraso:  ");
    scanf("%d", &imovel.qtdeAtraso);
        
    imovel.vlrMulta = multa * imovel.qtdeAtraso;
    printf("\n\n O Valor da Multa é R$: %.2f\n\n", imovel.vlrMulta);
    
    vlrTotal = imovel.vlrMulta + imovel.vlrImposto;
    printf("\n\n O Valor da Multa + Imposto é R$: %.2f\n\n", vlrTotal);
    */
    
    
    /*---------- Exercicio Struct Aula pratica 7-------------- */
        
    float multa = 50;
    float vlrTotalImovel = 0, vlrTotal = 0;
    int i;
    
    struct imovel imovel[5];
    
    
    for(i=0; i < 5; i++){
    
		fflush(stdin);
	    printf("Informe Nº do Imovel:  ");
	    scanf("%d", &imovel[i].cadastro);
	    
	    fflush(stdin);
	    printf("Informe o Valor do imposto R$:  ");
	    scanf("%f", &imovel[i].vlrImposto);
	    
	    fflush(stdin);
	    printf("Informe a qtde de meses em atraso:  ");
	    scanf("%d", &imovel[i].qtdeAtraso);
	        
	    imovel[i].vlrMulta = multa * imovel[i].qtdeAtraso;
	    printf("\n\n O Valor da Multa é R$: %.2f\n", imovel[i].vlrMulta);
	    
	    vlrTotalImovel = imovel[i].vlrMulta + imovel[i].vlrImposto;
  	    printf("O Valor da Multa + Imposto é R$: %.2f\n\n", vlrTotalImovel);
  	    
  	    vlrTotal = vlrTotal + vlrTotalImovel;
    	
	}
    
    
   	printf("O Valor Total de imposto dos imóveis é R$: %.2f", vlrTotal);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return (0);
    system("pause");
}




//DefiniÃ§Ã£o das funÃ§oes

int linearsearch(int a[], int key, int size){
    int n;
    
    for(n=0; n < size; ++n){
        if(a[n] == key){
            return key;
        }
    }
    return 0;
}
