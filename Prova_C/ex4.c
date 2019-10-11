#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>




int main () {
	setlocale(LC_ALL,"");
	
	int l, c, n = 1, t = 0;
	
	int matriz [4][4];
	
	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			matriz[l][c] = n;
			n = n*2;
			t = (t+n);
		}
	}

	for(l=0; l<4; l++){
		for(c=0; c<4; c++){
			printf("%6d", matriz[l][c]);
		}
		printf("\n");
	}
 
 
 	printf("Somatoria =%d", t/2);

				
	return (0);
    system("pause");
}
