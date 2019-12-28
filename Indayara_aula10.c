#include <stdio.h>

main()
{

char s[100];
char *ptr = s;
printf("Introduza uma String: "); gets(s);

if (*ptr == '\0')return;

while (*ptr!='\0')
    putchar (*ptr++);

    ptr--;

while( ptr>=s)
    putchar(*ptr--);
}




