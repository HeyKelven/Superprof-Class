#include <stdio.h>

int main()
{

float a, b, resp, *pont;
char op;
printf("entre com dois valores:");
scanf("%f %c %f",&a,&op,&b);

switch(op){
    case '+' : resp = a+b;
                    break;
    case '-' : resp = a-b;
                    break;
}

pont= &resp;

printf("%f %c %f = %f %i %f\n", a, op, b, resp, pont, *pont);
}

