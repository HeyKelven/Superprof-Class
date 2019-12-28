
#include <stdio.h>

typedef struct bloco{
char nome[50];
struct bloco *prox;
}grafo;

main(){
 grafo primeiro;
 strcpy(primeiro.nome,"cecilia");
 grafo segundo;
 strcpy(segundo.nome,"antonio");
 primeiro.prox= &segundo;
 grafo terceiro;
 strcpy(terceiro.nome,"renata");
 segundo.prox= &terceiro;
 printf("primeiro nome = %s \n, segundo nome = %s \n, terceiro nome = %s ", primeiro.nome,primeiro.prox->nome,primeiro.prox->prox->nome);
}
