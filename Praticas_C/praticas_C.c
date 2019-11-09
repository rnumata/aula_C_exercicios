
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>



// prototipo de função
int linearsearch(int a[], int key, int size);


// Defini��o de Struct
// Aula Prática Struct Ex 02

struct imovel {
    	int cadastro;
    	float vlrImposto;
    	int qtdeAtraso;
    	float vlrMulta;
	};

struct funcionario {
    int codigo;
    char nome [10];
    float sal_mes [12];
    float sal_ano;   
};       


/*---------- C5 Aula Pratica Modularizacao ---------- */

void ola ();

int mult (int x, int y);

float multf ();

int soma();
int num1, num2;  //declaracao de variaveis como global

int quad(int x);

int soma12(int pn_1, int pn_2);


/*---------- C8 Aula Pratica Recursividade ---------- */

void conta(int x);

void conta2(int y);


/*---------- C5 Aula Pratica Modularizacao Ex do pdf ---------- */

int somaproduto (int p_num1, int p_num2, int *soma, int *produto);




                
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
		
		printf("A Somatoria � %d\n",sum);
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
		printf("Peso ideal para Mulher �: %.2f\n",peso_m);
	}else if (sexo == 'M') {
		peso_h = (72.7*alt)-58;
		printf("Peso ideal para homem �: %.2f\n",peso_h);
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
			printf("Peso ideal para Mulher �: %.2f\n",peso_m);
		}else if (sexo == 'M') {
			peso_h = (72.7*alt)-58;
			printf("Peso ideal para homem �: %.2f\n",peso_h);
		}
		count = count + 1;
	}
		printf("Quantidade de pessoas avaliadas -> %d\n\n",count);

	----------------*/		
	
	
	/*----- Exercicio 6 while  --------*/
	
        /*
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
	printf("O Total �: %d\n",tot);
	
        */
	
	
	/* ------ C3 Aula Prática Ex 01 02 ------ */
	
	/*
	 int num[5];
	 int cont;
	 int sum=0;
	 
	 num[0]=10;
	 num[1]=20;
	 num[2]=30;
	 num[3]=40;
	 num[4]=50;
	  
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
	
	/* ------ C3 Aula Prática Ex 03 ------ */
	
	/*
			
	for(cont=0; cont <5; cont++){
		num[cont]=num[cont]*cont;
		printf("Indice %d x Valor do Vetor= %d\n",cont, num[cont]);	
	 }	
	 
	*/	
	
	/* ------ C3 Aula Prática Ex 04 05 06 ------ */
	
	/*
	for(cont=0; cont<5; cont++){
		printf("Digite o %d� Valor: ", cont+1);
		scanf("%d", &num[cont]);
	}
	
	printf("---------------------------------------\n");
	
	for(cont=0; cont<5; cont++){
		printf("num[%d]= %d\n\n",cont, num[cont]);
		
		sum = num[cont]+sum;
	}
	
	printf("---------------------------------------\n\n");
	
	printf("A soma dos vetores �: %d\n\n", sum);
	*/
	
	/* ------ C3 Exercicio Lançamento de Dados ------ */
	
        /*
	int lanc [10];
	int res [7] = {0};
	int i;
	
	for (i=0; i<10; i++){
		printf("Digite o %d� numero", i+1);
		scanf("%d", &lanc[i]);
                ++res[lanc[i]];
	}
	
	for (i=0; i<7; i++){
		printf("res[%d] = %d\n",i ,res[i]);
	}
	*/
	
	/* ------ C3 Exercicio Cadastro matrícula ------ */
	
        /*
	int mat [3];
	int nMat, i;
	
	for (i=0; i<3; i++){
		printf("Digite a %d� Matr�cula\n", i+1);
		scanf("%d", &mat[i]);
	}
	
	printf("Qual Matricula a ser consultada?\n\n");
	scanf("%d", &nMat);
 
	for(i=0; i<3; i++){
		if(mat[i] == nMat){
		   break;
		}
	}
	
	if(i == 3){
		printf("Aluno N�O Matriculado\n");
	} else {
		printf("Aluno Matriculado\n");
	}
	*/
	
    
	/* ------ C3 Aula Prática Ex 13 ------ */
	
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
        
        //Popular 2a Matriz         
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
        printf("Valor N�O encontrado na lista");
    }
    */
    
    /* ------ C3 Aula Prática Ex 14 ------ */ 
    
    /*
    int l, c, maior = 0;
    int matriz [5][4];

    // Popular a Matriz 
    for(l=0; l<5; l++){
    	for(c=0; c<4; c++){
    		printf("Informe a nota %d da disciplina %d: ", l, c);
    		scanf("%d", &matriz[l][c]);
	}
    }
    
    // Imprimir matriz    
    for(l=0; l<5; l++){
    	for(c=0; c<4; c++){
            printf("%6d", matriz[l][c]);
	}
        printf("\n");
    }   
    
    // Calculo do maior valor
    for(l=0; l<5; l++){
    	for(c=0; c<4; c++){
            if( maior < matriz[l][c]){
                maior = matriz[l][c];
            }  
	}
    }
    printf("O Maior valor da matriz é: %d", maior);
    */
        
    /* -------- Exercicio String --------*/
    
    /*
     char strTeste [20];

	printf("Informe seu nome");
	gets(strTeste);				// comando para ler string
	printf("%s", strTeste);                 // imprime o vetor de char strTeste
        printf("%c", strTeste[5]);              // imprime a posi��o 5
    */
    
    /*---------- C4 Aula Pratica Struct Ex 02-------------- */
    
    /*
    float multa = 50;
    float vlrTotal;
    
    struct imovel imovel;
    
    fflush(stdin);
    printf("Informe N� do Imovel:  ");
    scanf("%d", &imovel.cadastro);
    
    fflush(stdin);
    printf("Informe o Valor do imposto R$:  ");
    scanf("%f", &imovel.vlrImposto);
    
    fflush(stdin);
    printf("Informe a qtde de meses em atraso:  ");
    scanf("%d", &imovel.qtdeAtraso);
        
    imovel.vlrMulta = multa * imovel.qtdeAtraso;
    printf("\nO Valor da Multa � R$: %.2f\n", imovel.vlrMulta);
    
    vlrTotal = imovel.vlrMulta + imovel.vlrImposto;
    printf("\nO Valor da Multa + Imposto � R$: %.2f\n", vlrTotal);
    */
    
    /*---------- C4 Aula Pratica Struct Ex 07-------------- */
    
    /*    
    float multa = 50;
    float vlrTotalImovel = 0, vlrTotal = 0;
    int i;
    
    struct imovel imovel[5];
    
    
    for(i=0; i < 5; i++){
    
		fflush(stdin);
	    printf("Informe N� do Imovel:  ");
	    scanf("%d", &imovel[i].cadastro);
	    
	    fflush(stdin);
	    printf("Informe o Valor do imposto R$:  ");
	    scanf("%f", &imovel[i].vlrImposto);
	    
	    fflush(stdin);
	    printf("Informe a qtde de meses em atraso:  ");
	    scanf("%d", &imovel[i].qtdeAtraso);
	        
	    imovel[i].vlrMulta = multa * imovel[i].qtdeAtraso;
	    printf("\n\n O Valor da Multa � R$: %.2f\n", imovel[i].vlrMulta);
	    
	    vlrTotalImovel = imovel[i].vlrMulta + imovel[i].vlrImposto;
  	    printf("O Valor da Multa + Imposto � R$: %.2f\n\n", vlrTotalImovel);
  	    
  	    vlrTotal = vlrTotal + vlrTotalImovel;
    	
	}
   	printf("O Valor Total de imposto dos im�veis � R$: %.2f", vlrTotal);
    */
    
    
   
    /*---------- Exercicio vetor com struct-------------- */    
    
    /*
    struct funcionario func [2];
    int i, s, cod;
   
    // Popular um registro
    for(i=0; i<2; i++){
        
        func[i].sal_ano = 0;  //zera o sal_ano para o loop

        printf("Digite código: ");
        scanf("%d", &func[i].codigo);
        
        printf("Digite Nome: ");
        scanf("%s", &func[i].nome);

        // Popular os 12 salarios
        for(s=0; s<12; s++){   
            printf("Digite o %do salario: ", s+1 );
            fflush(stdin);
            scanf("%f", &func[i].sal_mes[s]);
            func[i].sal_ano = func[i].sal_ano + func[i].sal_mes[s];
        }
        system("clear");    
    }   
    system("clear");
    
    // Imprimir os registros
    for(i=0; i<2; i++){   
        printf("Codigo => %d\n", func[i].codigo);
        printf("Nome => %s\n", func[i].nome);
        
        for(s=0; s<12; s++){
            printf("Salario %do mes => %.2f\n", s+1, func[i].sal_mes[s]);
        }
        printf("Salario Ano => %.2f\n\n", func[i].sal_ano);   
    }
   
    // Procurar um código nos registros
    printf("Qual cadastro deseja consultar? ");
    scanf("%d", &cod);
    
    for(i=0; i<2; i++){
        if(func[i].codigo == cod){
            printf("Código %d Cadastrado", cod);
            break;
        } else {
            printf("Código NÃO cadastrado");
            break;
        }
    }
    */
    
   /*---------- Matriz While -------------------------------------------------- */  

    /*
    char resp [1];
    
    printf("Deseja Cadastrar? S/N ");
    fflush(stdin);
    scanf("%s", &resp);
    
    while (resp[0] == 's' || resp[0] == 'S'){
          
        // digitar código
 
 
        printf("Deseja Cadastrar? S/N ");
        scanf("%s", &resp);        
    }
    */
    
    
    /*---------- Exercicio revisão ------------------ */ 
    
    /*    
    int codTime, i, contTime = 0, contLoop = 0;
    char nome [5];
    int idade;
    float mediaIdade;
    char resp [1];
    
    printf("Deseja Cadastrar? S/N ");
    fflush(stdin);
    scanf("%s", &resp);
    
    while (resp[0] == 's' || resp[0] == 'S'){
        
        printf("Digite o código do time: ");
        scanf("%d", &codTime);
        
        mediaIdade = 0;
        contLoop = 0;
        
        for(i=0; i<3; i++){
            printf("Digite o Nome: ");
            scanf("%s", &nome);
            printf("Digite a Idade: ");
            scanf("%d", &idade);
            mediaIdade = mediaIdade + idade;
            contLoop = contLoop + 1;
        }
        
        printf("A Media de idade é %.2f\n", (mediaIdade/contLoop));
        
        contTime = contTime + 1;
       
        printf("\nDeseja Cadastrar? S/N ");
        scanf("%s", &resp);        
    }
    
    printf("\nForam cadastrados %d time(s)", contTime);
    
    */    
    
    
    /*---------- C5 Aula Pratica Modularizacao Ex 01 a 06 ---------- */
    
    /*
    ola();                              // chamada da funcao ola() sem retorno
    
    int res;
    res = mult(10, 9);                  // variavel res para receber o return da funcao
    printf("O Produto é: %d\n", res );
    
    printf("Produto a partir do printf %d\n", mult(10,9));
    */
    
    
    /*---------- C5 Aula Pratica Modularizacao Ex 07 a 9 ---------- */
    
    /*
    float resf;
    resf = multf();
    printf("O produto do float é: %.2f", resf);
    */
    
    
    /*---------- C5 Aula Pratica Modularizacao Ex 10 a 11 ---------- */
    
    /*
    int res;
    
    printf("--- Soma ---\n");
    
    printf("Informe o 1o numero: ");
    scanf("%d", &num1);
    
    printf("Informe o 2o numero: ");
    scanf("%d", &num2);
    
    res = soma();
    printf("O Valor da soma é: %d", res);
    */
    
    /*---------- C5 Aula Pratica Modularizacao Ex 12 ao 15 ---------- */
    
    /*
    int num, quadrado; 
    printf("Informe o numero: ");
    scanf("%d", &num);
    //quadrado = quad(num);
    printf("O quadrado de %d é %d", num, quad(num));
    */
    
    
    /*---------- C5 Aula Pratica Modularizacao Ex 16 ao 18 ---------- */
    
    /*
    int num1, num2, res;
    
    printf("--- Soma ---\n");
    printf("Informe 1o Numero: ");
    scanf("%d", &num1);
    printf("Informe 2o Numero: ");
    scanf("%d", &num2);
    res = soma12(num1, num2);
    printf("A somatoria de %d + %d -> %d", num1, num2, res);
    */
    
    /*---------- C5 Aula Pratica Modularizacao Ex do pdf ---------- */
    
    /*
    int num1, num2, soma=0, produto=0, resultado;
    
    printf("Informe o 1o numero: ");
    scanf("%d", &num1);
    
    printf("Informe o 2o numero: ");
    scanf("%d", &num2);
    
    somaproduto(num1, num2, &soma, &produto);
    
    printf("Soma => %d\n", soma);
    printf("Produto = %d\n", produto);
    */
    
      
    /*---------- C8 Aula Pratica Recursividade Ex 1 ---------- */
    
    /*
    int num;
    
    printf("Informe o numero de vezes a ser impresso: ");
    fflush(stdin);
    scanf("%d", &num);
    
    conta(num);
    conta2(num);
    */
    
    
    /*---------- C7 Aula Pratica Ponteiros Ex 1---------- */
    
    /*
    int num,*p;
    
	num=55; 

	p=&num; // Pega o endereco de num 
	printf ("\nValor inicial: %d\n",num);
	*p=100; // Muda o valor de num de uma maneira indireta 
	printf ("\nValor final: %d\n",num); 
    */
    
    
    /*---------- C7 Aula Pratica Ponteiros Ex 2---------- */
    
	int x;
 	int *p1, *p2, *p3;
 	x = 101;

 	p1 = &x;
 	p2 = p1; 
 	p3 = p1;
	
	printf("p1 aponta para %p ", p1); //imprime o endere�o de x
 	printf(" que possui o valor %d \n", *p1); //imprime o endere�o de x

 	printf("p2 aponta para %p ", p2); //imprime o endere�o de x
 	printf(" que possui o valor %d \n", *p2); //imprime o endere�o de x 

	printf("p2 aponta para %p ", p3); //imprime o endere�o de x
 	printf(" que possui o valor %d \n", *p3); //imprime o endere�o de x 
	
	
    
    return (0);
    system("pause");
}



// Linha 341
//Definição das funçoes

int linearsearch(int a[], int key, int size){
    int n;
    
    for(n=0; n < size; ++n){
        if(a[n] == key){
            return key;
        }
    }
    return 0;
}


void ola() {
    printf("comando da funcao Ola\n");
}

int mult(int x, int y){
    int res = x * y;
    return res;
}

float multf(){
    float resf = 5000.0 * 9 / 100;
    return resf;
}

int soma(){
    int valor;
    valor = num1 + num2;
    return valor;
}

int quad(int x){
    int quadrado;
    quadrado = x * x;
    return quadrado;
}

int soma12(int pn_1, int pn_2){
    int valor;
    valor = pn_1 + pn_2;
    pn_1 = 0;
    pn_2 = 0;
    return valor;
}

void conta(int x){
    
    if(x > 0){
        conta(x-1); 
    }
        printf("> %d\n", x);
}

void conta2(int y){
    
    if(y > 0){
        printf("=> %d\n", y);
    }
        conta2(y-1);
    
}

int somaproduto (int p_num1, int p_num2, int *soma, int *produto){
    
    *soma = p_num1 + p_num2;
    *produto = p_num1 * p_num2;
}
