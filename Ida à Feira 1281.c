# Questoes-estruturas-de-dados-TDE-4
Questoes-estruturas-de-dados TDE 4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double total;
double preco[1000];
char nome[100];
char fruta[1000][100];
int quantidade;
int main(){
    int i, j, k, l, m, n, o;
    scanf("%d", &n);
    for (l = 0; l < n; l++){
        scanf("%d", &m);
        total = 0;
        for (i = 0; i < m; i++){
            scanf ("%s %lf", fruta[i], &preco[i]);
        }
        scanf("%d", &o);
        for (j = 0; j < o; j++){
            scanf("%s %d", &nome, &quantidade);
            for (k = 0; k < m; k++){
                if (strcmp(nome, fruta[k]) == 0){
                    total = total + (quantidade * preco[k]);
                }
            }
        }
        printf("R$ %.2lf\n", total);
    }

    return 0;
}
