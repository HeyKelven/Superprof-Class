# include <stdio.h>

int main ()
{
    int a, b,c;
    a= 1;
    b= 2;
    c=0;

    if ( a>b)
        printf("valor de %d é maior que o %d", a, b);

    else{
        c=a;
        a=b;
        b=c;
        printf("valor de %d é maior que o %d", a, b);
    }

}


