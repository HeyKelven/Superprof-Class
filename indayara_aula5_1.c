#include <stdio.h>

main()
{
    int n, resp=0;
     printf ("entre com um valor: \n");
     scanf("%d",&n);

     while (n>0){
            resp= resp+n;
            n-=1;
        }
       printf("%d\n", resp);

}
