# Questoes-estruturas-de-dados-TDE-4
Questoes-estruturas-de-dados TDE 4
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int vetor[50];
int i, teste, vagoes, organizador, x ,y;
int main (){	
	scanf("%d", &teste);
	while(teste>0){
		scanf("%d", &vagoes);
		for(i=0;i<vagoes;i++)
			scanf("%d ", &vetor[i]);
		x=0;
		do{	
			y = 0;
			i = 0;
			while (i < vagoes - 1){	
				if (vetor[i] > vetor[i + 1]){	
					organizador = vetor[i];
					vetor[i] = vetor[i + 1];
					vetor[i + 1] = organizador;
					x++;
					y = 1;
				}			
				i++;
			}
		}while (y == 1);
		printf("Optimal train swapping takes %d swaps.\n", x);
		teste--;
	}	
	return 0;
}
