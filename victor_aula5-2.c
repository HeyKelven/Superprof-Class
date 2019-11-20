#include<stdio.h>

main(){

int n, resp = 0, i = 0;

printf("Entre com o valor: ");
scanf("%d", &n);

for ( i ; i<=n; i++){

    resp += i;

    printf("resposta : %d e contador: %d\n", resp, i);
}

printf("A soma é: %d", resp);

}
