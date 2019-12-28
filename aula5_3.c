# include <stdio.h>

main()
{
    int n,i,resp=0;

    printf("entre com o numero: \n", n);
    scanf("%d", &n);

    for(i=0;i<=10;i+=1)
    {
      resp = n*i;
      printf("%d*%d =%d\n",n,i,resp);
    }
}
