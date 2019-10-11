#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

#define vlrHnormal 10
#define vlrHextra 15

int main () {
	setlocale(LC_ALL,"");
	
	int hNormal, hExtra;
	float salAno = 0, poup = 0;
				
	printf("Digite total de HORA NORMAL do ano: ");
	fflush(stdin);
	scanf("%d", &hNormal);
		
	printf("Digite total de HORA EXTRA do ano: ");
	fflush(stdin);
	scanf("%d", &hExtra);
		
	salAno = (hNormal * vlrHnormal) + (hExtra * vlrHextra);
	poup = salAno * 0.08;
		
	printf("\nO Salario Anual é => %.2f\n", salAno);
	printf("\nO valor a poupar é => %.2f\n", poup);
			
				
	return (0);
    system("pause");
}
