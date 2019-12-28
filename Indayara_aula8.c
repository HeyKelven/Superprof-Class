#include <stdio.h>

main()
{

float num1, num2, resp;
char op;

printf("Escreva uma Expressao: ");
scanf("%f %c %f ", &num1, &op, &num2);

switch(op){
    case '+': resp= num1+num2;
                break;
    case '-': resp= num1-num2;
                break;
    case '*':
    case 'x':
    case 'X':  resp = num1*num2;
                break;
    case '/':
    case '\\':
    case ':': resp = num1/num2;
                break;
}
printf("%f %c = %f\n", num1,op, num2, resp);
    }
