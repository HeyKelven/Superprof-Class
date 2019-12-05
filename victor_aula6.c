#include<stdio.h>

tabuada(int n){
    int i,resp=0;

    for(i=0;i<=10;i+=1)
    {
      resp = n*i;
      printf("%d*%d =%d\n",n,i,resp);
    }
}

int soma (int a, int b){
    return a + b;
}

int main(){


    int resultado = 0;
    resultado = soma(352, 148);
    printf("%d\n", resultado);
}
