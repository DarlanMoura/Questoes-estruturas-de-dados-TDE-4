# Questoes-estruturas-de-dados-TDE-4
Questoes-estruturas-de-dados TDE 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 235
#define true 1
#define false 0
void main (){
	int numero, num, i, quantidade, flag, altura[MAX] = {0};
    scanf("%d", &quantidade);
	while (quantidade--){
		scanf("%d", &numero);
		for (i = 0; i < numero; ++i){
			scanf("%d", &num);
			altura[num]++;
		}
        flag = false;
		for (i = 20; i <= 230; ++i){
			if (altura[i] > 1){
				while (altura[i]--){
                    if (!flag){
						printf("%d", i);
						flag = true;
					}else{
						printf(" %d", i);
					}
				}
			}
			else if (altura[i] == 1)
				if (!flag){
					printf("%d", i);
					flag = true;
				}else{
					printf(" %d", i);
				}
		}
		printf("\n");
		memset(altura, 0, sizeof(altura));
	}
}
