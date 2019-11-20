#include<stdio.h>
int main(void)
{
  int resp = 100;

  do
  {
    printf("O numero %d e menor que 5\n", resp);
    resp+=1;

  }while (resp < 5);

  return 0;
}
