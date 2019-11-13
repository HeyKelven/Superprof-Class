# include <stdio.h>
main ()
{
   int a,b;
   float r=0;
   char op;
   printf("escreva uma expressao:\n");
   scanf("%d %c %d",&a,&op,&b);
   switch(op)
   {
      case '+': r = a + b;
                break;
      case '-': r = a - b;
                break;
      case '*':
      case 'x':
      case 'X': r = a*b;
                break;
      case '/':
      case ':':r = a/b;
                break;
          }
            printf("%d %c %d = %f\n", a,op,b,r);
}


