# include <stdio.h>
main()
{
    int n=0,i=1, resp = 0;

        while (i<11)
        {
        while(n<=10)
        {
            resp = i*n;
            printf("%d*%d =%d\n",i,n, resp);
    n+= 1;
    }
    n=0;
    i+= 1;
    }

}




