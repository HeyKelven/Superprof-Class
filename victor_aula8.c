#include <stdio.h>

typedef struct media {
    char nome[100];
    int nota;
}bloco;

int main(){

    bloco aluno1;

    printf("Entre com o Nome do aluno:\t");
    scanf("%s", &aluno1.nome);

    printf("Entre com a Nota do aluno:\t");
    scanf("%d", &aluno1.nota);

    printf("%s com a nota %d\n", aluno1.nome, aluno1.nota);
}
