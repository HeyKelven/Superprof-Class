
#include <stdio.h>

typedef struct bloco{
int colocado;
struct bloco *prox;
}podio;

main()
{
    podio primeiro;
    primeiro.colocado=1;
    podio segundo;
    segundo.colocado=2;
    primeiro.prox=&segundo;
    podio terceiro;
    terceiro.colocado=3;
    segundo.prox=&terceiro;

    printf("primeiro colocado %d \n segundo colocado %d \n terceiro colocado %d \n", primeiro.colocado,primeiro.prox->colocado, primeiro.prox->prox->colocado);




}
