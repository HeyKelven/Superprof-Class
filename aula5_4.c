# include <stdio.h>

main()
{
    int n,i,resp=0;

    for(n=0;n<=10; n+=1)
    {
        for(i=0;i<=10; i+=1)
        {
            resp= n*i;
            printf("%d*%d=%d \n", n,i,resp);
        }
    }

}
